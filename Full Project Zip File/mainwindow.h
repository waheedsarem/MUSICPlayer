#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtMultimedia/QMediaPlayer>
#include <QFileDialog>
#include <QStyle>
#include <QMainWindow>
#include <QAudioOutput>
#include <QActionGroup>
#include <propertieswindow.h>
#include <QMediaMetaData>
#include <QPixmap>
#include <QDebug>
#include <QRandomGenerator> // Include this header for shuffling
#include "selectclass.h"
#include "artist_name_enter.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void durationChanged(qint64 duration);
    void positionChanged(qint64 progress);
    void on_Button_pauseplay_clicked();
    void on_actionSelect_Audio_File_triggered();
    void on_pushButton_clicked();
    void on_RepeatButton_clicked();
    void handleMediaStatusChanged(QMediaPlayer::MediaStatus status);
    void on_VolumeSlider_valueChanged(int value);
    void on_action1x_triggered();
    void on_action2x_triggered();
    void on_action1_5x_triggered();
    void on_action2x_2_triggered();
    void on_VolumeButton_clicked();
    void on_TimelineBar_valueChanged(int value);
    void on_actionProperties_triggered();
    void on_ShuffleButton_clicked();
    void on_ForwardButton_clicked();
    void on_BackwardButton_clicked();
    void on_actionSelect_Artist_triggered();
    void handleArtistFound(const QString &artistName);

private:
    Ui::MainWindow *ui;
    QMediaPlayer *MPlayer;
    QAudioOutput *audioOutput;
    bool repeatMode;
    bool muted;
    qint64 Mduration;
    void updateduration(qint64 duration);
    QFileInfo fileinfo;
    QStringList selectedFiles;
    SelectClass *sc;
    int currentIndex;
};



#endif // MAINWINDOW_H
