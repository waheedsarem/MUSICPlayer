#ifndef SELECTCLASS_H
#define SELECTCLASS_H

#include <QObject>
#include <QMediaPlayer>
#include <QStringList>
#include <QDir>
#include <QDebug>
#include <QDateTime>
#include <QThread>

class LocalLib;
class OnlineLib;
class ManualFileSelect;
class ArtistFileSelect;

//-------------------------------------------------------------------------------------------

class SelectClass : public QObject {
    Q_OBJECT
private:

public:
    virtual void manualfileselected(const QStringList &fileNames) = 0;
    virtual void artistfileselected() = 0;

};

//-------------------------------------------------------------------------------------------

class LocalLib : public SelectClass {
private:
    ManualFileSelect *manualFile;
    ArtistFileSelect *artistFile;
public:
    LocalLib(QMediaPlayer* player);
    virtual void manualfileselected(const QStringList &fileNames);
    virtual void artistfileselected();
    ArtistFileSelect* getArtistFile() const { return artistFile; }
    virtual ~LocalLib();

};

//-------------------------------------------------------------------------------------------

class ManualFileSelect : public QObject {
    Q_OBJECT
private:
    QMediaPlayer *mPlayer;
    QStringList selectedFiles;
public:
    explicit ManualFileSelect(QObject *parent = nullptr) : QObject(parent) {}
    void ManualFileInitialization(QMediaPlayer *player);
    void loadFiles(const QStringList &fileNames);
    ~ManualFileSelect();

};

//-------------------------------------------------------------------------------------------

class ArtistFileSelect : public QObject {
    Q_OBJECT
private:
    QMediaPlayer *mPlayer;
    QMediaPlayer *msPlayer;
    QStringList mFileList;
public:
    explicit ArtistFileSelect(QObject *parent = nullptr);
    void initializePlayer(QMediaPlayer *player);
    void loadArtistFiles();
    ~ArtistFileSelect();

};

#endif // SELECTCLASS_H
