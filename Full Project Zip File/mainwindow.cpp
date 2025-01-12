#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , MPlayer(new QMediaPlayer(this)) // Initialize MPlayer before using it
    , audioOutput(new QAudioOutput(this))
    , repeatMode(false)
    , muted(false)
    , sc(new LocalLib(MPlayer))

{
    ui->setupUi(this);



    audioOutput = new QAudioOutput;
    MPlayer->setAudioOutput(audioOutput);

    //icons changed of multiple buttons
    ui->Button_pauseplay->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->StopButton->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
    ui->ForwardButton->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
    ui->BackwardButton->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));

    connect(ui->StopButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);
    connect(MPlayer,&QMediaPlayer::durationChanged,this,&MainWindow::durationChanged);
    connect(MPlayer,&QMediaPlayer::positionChanged,this,&MainWindow::positionChanged);
    connect(MPlayer, &QMediaPlayer::durationChanged, this, &MainWindow::updateduration);
    connect(MPlayer, &QMediaPlayer::mediaStatusChanged, this, &MainWindow::handleMediaStatusChanged);
    ui->VolumeButton->setIcon(QIcon("C:/Users/wahee/Documents/OOP-Project/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/debug/icons8-mute-50.png"));

    ui->scrollArea->horizontalScrollBar()->setEnabled(false);

    ui->VolumeSlider->setMinimum(0);
    ui->VolumeSlider->setMaximum(100);
    ui->VolumeSlider->setValue(100);

    audioOutput->setVolume(ui->VolumeSlider->value());

    ui->TimelineBar->setRange(0,MPlayer->duration() /1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateduration(qint64 duration)
{
    QString timestr;
    if (duration || Mduration){
        QTime CurrentTime(0, (duration / 60000) % 60, (duration / 1000) % 60, (duration % 1000));
        QTime TotalTime((Mduration / 3600) % 60,(Mduration / 60) % 60, Mduration % 60, (Mduration * 1000) % 1000);
        QString format = "mm:ss";
        if(Mduration > 3600)
            format = "hh:mm:ss";
        ui->CurrenTime->setText(CurrentTime.toString(format));
        ui->TotalTime->setText(TotalTime.toString(format));

    }
}

void MainWindow::durationChanged(qint64 duration)
{
    Mduration = duration / 1000;
    ui->TimelineBar->setMaximum(Mduration);
    ui->TimelineBar->setRange(0, Mduration);

}

void MainWindow::positionChanged(qint64 progress)
{
    if (!ui->TimelineBar->isSliderDown()){
        ui->TimelineBar->setValue(progress / 1000);
        updateduration(progress);
    }
}

void MainWindow::on_actionSelect_Audio_File_triggered() {
    // Opening a file dialog to select multiple .mp3 and .wav files
    if (MPlayer->playbackState() == QMediaPlayer::PlayingState || MPlayer->playbackState() == QMediaPlayer::PausedState) {
        MPlayer->stop();
    }

    QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Select Audio Files"), "",tr("Audio Files (*.mp3 *.wav)"));

    if (!fileNames.isEmpty()) {
        selectedFiles = fileNames; // Store selected files in a member variable
        int currentIndex = 0; // Reset the current index
        sc->manualfileselected(fileNames); // Pass the filenames to the selection class
        MPlayer->setSource(QUrl::fromLocalFile(selectedFiles[currentIndex])); // Set the player source to the first file
        ui->SongName->setText(QFileInfo(selectedFiles[currentIndex]).fileName()); // Update UI with the new song's name

        // Display all song names in the label
        QString displayText = "";
        for (const QString &fileName : fileNames) {
            QFileInfo fileInfo(fileName);
            displayText += fileInfo.fileName() + "\n"; // Use fileInfo to extract just the file name
        }
        ui->SongList->setText(displayText); // Assume you have a QLabel *labelSongList in your UI
         ui->Button_pauseplay->setIcon(style()->standardIcon(QStyle::SP_MediaPause));

    }
}

void MainWindow::on_actionSelect_Artist_triggered()
{
    Artist_name_enter ArtWin;
    ArtWin.setModal(true);

    // Connect the artistFound signal to a slot in MainWindow
    connect(&ArtWin, &Artist_name_enter::artistFound, this, &MainWindow::handleArtistFound);

    ArtWin.exec();
}

void MainWindow::handleArtistFound(const QString &artistName) {
    // Handle the artist name here, maybe update some UI elements or internal data
    qDebug() << "Artist found: " << artistName;

    if (MPlayer->playbackState() == QMediaPlayer::PlayingState || MPlayer->playbackState() == QMediaPlayer::PausedState) {
        MPlayer->stop();
    }

    QString artistFolderPath = QDir("C:/Users/wahee/Music").absoluteFilePath(artistName);
    QDir artistDir(artistFolderPath);

    QStringList songFiles = artistDir.entryList(QStringList() << "*.mp3" << "*.wav", QDir::Files);
    if (songFiles.isEmpty()) {
        QMessageBox::information(this, "Artist Songs", "No songs found in artist's folder.");
        return;
    }

    QString displayText;
    QStringList fullFilePaths;
    foreach (const QString &file, songFiles) {
        QUrl songUrl = QUrl::fromLocalFile(artistDir.absoluteFilePath(file));
        fullFilePaths.append(songUrl.toLocalFile());
        displayText += QFileInfo(file).fileName() + "\n"; // Accumulate file names for display
    }
    ui->SongList->setText(displayText);

    // Assuming you want to play the first song immediately
    qDebug() << "Entering function 3";


    sc->artistfileselected();

    MPlayer->setSource(QUrl::fromLocalFile(fullFilePaths.first()));
    MPlayer->play();

    ui->Button_pauseplay->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    ui->SongName->setText(QFileInfo(fullFilePaths.first()).fileName()); // Update the currently playing song name

    // Update the list of selected files to reflect this selection
    selectedFiles = fullFilePaths;
    currentIndex = 0;

}

void MainWindow::on_Button_pauseplay_clicked()
{
    qDebug() << "button clicked";
    if (MPlayer->playbackState() == QMediaPlayer::PlayingState){
        MPlayer->pause();
        ui->Button_pauseplay->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    }
    else{
        MPlayer->play();
        ui->Button_pauseplay->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    }
}

void MainWindow::on_pushButton_clicked()
{
    if (MPlayer->playbackState() != QMediaPlayer::StoppedState)
    {
        ui->Button_pauseplay->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
        MPlayer->stop();
        MPlayer->setPosition(0);  // Set playback position to the beginning
    }
}

void MainWindow::on_RepeatButton_clicked()
{
    qDebug() << "Repeat Button pressed!  " << repeatMode;
    repeatMode = !repeatMode;  // Toggle repeat mode
    if (repeatMode)
    {
        ui->RepeatButton->setStyleSheet("background-color: rgb(54, 54, 54);border-style: solid;border-width:2px;border-radius:50px;border-color: black;");
        connect(MPlayer, &QMediaPlayer::mediaStatusChanged, this, &MainWindow::handleMediaStatusChanged);
    }
    else
    {
        ui->RepeatButton->setStyleSheet("background-color: rgb(157, 157, 157); border-style: solid;border-width:2px;border-radius:50px;border-color: black;"); // Reset style
        disconnect(MPlayer, &QMediaPlayer::mediaStatusChanged, this, &MainWindow::handleMediaStatusChanged);
    }
}

void MainWindow::handleMediaStatusChanged(QMediaPlayer::MediaStatus status)
{
    if (status == QMediaPlayer::EndOfMedia) {
        if (repeatMode) {
            qDebug() << "Repeatmode!  " << repeatMode;
            MPlayer->setPosition(0);  // Restart the current song
            MPlayer->play();
        }
        else {
            on_ForwardButton_clicked();  // Move to next song
        }
    }
}

void MainWindow::on_VolumeSlider_valueChanged(int value)
{
    float volume = value / 100.0f;

    audioOutput->setVolume(volume);
    if(volume == 0){
        ui->VolumeButton->setIcon(QIcon("C:/Users/wahee/Documents/OOP-Project/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/debug/icons8-mute-50.png"));
    }
    else{
        ui->VolumeButton->setIcon(QIcon("C:/Users/wahee/Documents/OOP-Project/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/debug/icons8-volume-50.png"));
    }
}

void MainWindow::on_action1x_triggered()
{
    MPlayer->setPlaybackRate(0.5);
}

void MainWindow::on_action2x_triggered()
{
    MPlayer->setPlaybackRate(1.0);
}

void MainWindow::on_action1_5x_triggered()
{
    MPlayer->setPlaybackRate(1.5);
}

void MainWindow::on_action2x_2_triggered()
{
    MPlayer->setPlaybackRate(2.0);
}

void MainWindow::on_VolumeButton_clicked()
{
    if (muted == false){
        ui->VolumeButton->setIcon(QIcon("C:/Users/wahee/Documents/OOP-Project/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/debug/icons8-mute-50.png"));
        muted = true;
        audioOutput->setMuted(true);
    }
    else{
        ui->VolumeButton->setIcon(QIcon("C:/Users/wahee/Documents/OOP-Project/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/debug/icons8-volume-50.png"));
        muted = false;
        audioOutput->setMuted(false);
    }
}

void MainWindow::on_TimelineBar_valueChanged(int value)
{
    if (!ui->TimelineBar->isSliderDown()) return;
    MPlayer->setPosition(value * 1000);
}

void MainWindow::on_actionProperties_triggered()
{
    if (!selectedFiles.isEmpty() && currentIndex >= 0 && currentIndex < selectedFiles.size()) {
        QFileInfo fileInfo(selectedFiles[currentIndex]);
        PropertiesWindow propWin(this, MPlayer, fileInfo, MPlayer->duration());
        propWin.setModal(true);
        propWin.exec();
    }
}

void MainWindow::on_ForwardButton_clicked()
{
    qDebug() << "Forward button clicked";

    if (selectedFiles.isEmpty()) return;  // No files to play

    currentIndex = (currentIndex + 1) % selectedFiles.size();  // Increment or loop to the start

    MPlayer->setSource(QUrl::fromLocalFile(selectedFiles[currentIndex]));
    ui->SongName->setText(QFileInfo(selectedFiles[currentIndex]).fileName());
    MPlayer->play();
}

void MainWindow::on_BackwardButton_clicked()
{
    qDebug() << "Backward button clicked";

    // Check if there are files in the selectedFiles list
    if (!selectedFiles.isEmpty()) {
        // Decrement the currentIndex to play the previous song
        currentIndex--;
        qDebug() << "Current Index: " << currentIndex;

        // Check if the currentIndex is within the bounds of the selectedFiles list
        if (currentIndex < 0) {
            // If it goes below zero, loop back to the end of the list
            currentIndex = selectedFiles.size() - 1;
        }
        // Set the source of the QMediaPlayer to the previous song
        MPlayer->setSource(QUrl::fromLocalFile(selectedFiles[currentIndex]));

        // Update the UI with the new song's information
        fileinfo.setFile(selectedFiles[currentIndex]);
        ui->SongName->setText(fileinfo.fileName());

        // Play the previous song
        MPlayer->play();
    }
}

void MainWindow::on_ShuffleButton_clicked()
{
    // Check if there are files in the selectedFiles list
    if (!selectedFiles.isEmpty()) {
        // Get the index of the current song
        int currentSongIndex = currentIndex;

        // Shuffle the songs starting from the next song after the current one
        std::random_shuffle(selectedFiles.begin() + currentSongIndex + 1, selectedFiles.end());

        // Output shuffled order for debugging
        qDebug() << "Shuffled Playlist Order:";
        for (const QString& song : selectedFiles) {
            qDebug() << song;
        }

        // Update UI with the new shuffled file information
        currentIndex = currentSongIndex + 1;

        // Set up player for the first shuffled file
        if (currentIndex < selectedFiles.size()) {
            MPlayer->setSource(QUrl::fromLocalFile(selectedFiles[currentIndex]));

            fileinfo = QFileInfo(selectedFiles[currentIndex]);
            ui->SongName->setText(fileinfo.fileName());
            MPlayer->play();
        }
    }
}


