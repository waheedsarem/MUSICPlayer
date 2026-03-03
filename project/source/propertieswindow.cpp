#include "propertieswindow.h"
#include "ui_propertieswindow.h"

PropertiesWindow::PropertiesWindow(QWidget *parent, QMediaPlayer *player, const QFileInfo &info, qint64 duration)
    : QDialog(parent)
    , ui(new Ui::PropertiesWindow)
    , mPlayer(player)
    , fileInfo(info)
    , mduration(duration)
{
    ui->setupUi(this);


    ui->Name_Label->setText(fileInfo.fileName());
    ui->Path_Label->setText(fileInfo.absoluteFilePath());
    ui->Size_Label->setText(QString::number(fileInfo.size() / 1024.0 / 1024.0, 'f', 2) + " MB");

    QTime totalTime = QTime::fromMSecsSinceStartOfDay(duration);
    QString format = "mm:ss";
    if (duration > 3600 * 1000) format = "hh:mm:ss";
    ui->Duration_Label->setText(totalTime.toString(format));

    ui->Bitrate_Label->setText("." + fileInfo.suffix());

    QMediaMetaData metaData = mPlayer->metaData();

    QVariant artist = metaData.value(QMediaMetaData::ContributingArtist);
    if (!artist.isNull()) {
        ui->Year_Label->setText(artist.toString());
    }
    else{
         ui->Year_Label->setText("Unknown");
    }
    QVariant bitrate = metaData.value(QMediaMetaData::AudioBitRate);
    if (!bitrate.isNull()) {
        int bitrateval = bitrate.toInt();
        ui->Bitrate->setText(QString::number(bitrateval / 1000) + " kbps");
    }
    else{
        ui->Bitrate->setText("Unknown");
    }



}

PropertiesWindow::~PropertiesWindow()
{
    delete ui;
}

