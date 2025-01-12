#ifndef PROPERTIESWINDOW_H
#define PROPERTIESWINDOW_H
#include <QDialog>
#include <QAudioOutput>
#include <QMediaMetaData>
#include <QtCore>
#include <QtMultimedia/QMediaPlayer>
#include <QFileDialog>
#include <QStyle>
#include <QActionGroup>
#include <QtMultimediaWidgets/QtMultimediaWidgets>

namespace Ui {
class PropertiesWindow;
}

class PropertiesWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PropertiesWindow(QWidget *parent = nullptr, QMediaPlayer *player = nullptr, const QFileInfo &info = QFileInfo(), qint64 mduration = 0);
    ~PropertiesWindow();

private:
    Ui::PropertiesWindow *ui;

    QMediaPlayer *mPlayer;
    QFileInfo fileInfo;
    QAudioOutput *AudioOutputs;
    qint64 mduration;

};

#endif // PROPERTIESWINDOW_H
