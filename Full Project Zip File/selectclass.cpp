#include "selectclass.h"

LocalLib::LocalLib(QMediaPlayer* player) : SelectClass(), manualFile(new ManualFileSelect(this)), artistFile(new ArtistFileSelect(this)) {
    manualFile->ManualFileInitialization(player);
    artistFile->initializePlayer(player);
}

void LocalLib::manualfileselected(const QStringList &fileNames){
    manualFile->loadFiles(fileNames);
}

void ManualFileSelect::ManualFileInitialization(QMediaPlayer *player) {
    mPlayer = player;
}

void ManualFileSelect::loadFiles(const QStringList &fileNames) {
    selectedFiles = fileNames; // Update the list of selected files
    if (!selectedFiles.isEmpty()) {
        mPlayer->setSource(QUrl::fromLocalFile(selectedFiles.first())); // Set the media player source to the first file

    }
}

void LocalLib::artistfileselected(){
    artistFile->loadArtistFiles();
}

void ArtistFileSelect::initializePlayer(QMediaPlayer *player) {
    mPlayer = player;
}

void ArtistFileSelect::loadArtistFiles() {
    qDebug() << "Entering function 2";

    QStringList files = mFileList;

    // Simulate checking files existence or processing them
    for (const QString &file : files) {
        qDebug() << "Processing file:" << file;
        QThread::msleep(100);  // Simulate delay in processing
    }


    // Loading the first file to play
    if (!mFileList.isEmpty()) {
        mPlayer->setSource(QUrl::fromLocalFile(mFileList.first()));
        mPlayer->play();
    }


    // function plays the song in the list
}

ArtistFileSelect::ArtistFileSelect(QObject *parent)  : QObject(parent), mPlayer(nullptr), msPlayer(nullptr) {

}

LocalLib::~LocalLib() {
    delete manualFile;
    delete artistFile;
}
ManualFileSelect::~ManualFileSelect() {

}

ArtistFileSelect::~ArtistFileSelect() {

}
