/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSelect_Audio_File;
    QAction *action1x;
    QAction *action2x;
    QAction *action1_5x;
    QAction *action2x_2;
    QAction *actionProperties;
    QAction *actionSelect_Artist;
    QWidget *centralwidget;
    QPushButton *Button_pauseplay;
    QPushButton *BackwardButton;
    QPushButton *ForwardButton;
    QPushButton *StopButton;
    QPushButton *RepeatButton;
    QPushButton *ShuffleButton;
    QSlider *VolumeSlider;
    QLabel *SongName;
    QSlider *TimelineBar;
    QPushButton *VolumeButton;
    QLabel *CurrenTime;
    QLabel *TotalTime;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *SongList;
    QMenuBar *menubar;
    QMenu *menuOpen;
    QMenu *menuPlayBack_Speed;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(520, 500);
        MainWindow->setMinimumSize(QSize(520, 500));
        MainWindow->setMaximumSize(QSize(520, 510));
        QFont font;
        font.setFamilies({QString::fromUtf8("Lato")});
        font.setPointSize(10);
        MainWindow->setFont(font);
        actionSelect_Audio_File = new QAction(MainWindow);
        actionSelect_Audio_File->setObjectName("actionSelect_Audio_File");
        action1x = new QAction(MainWindow);
        action1x->setObjectName("action1x");
        action2x = new QAction(MainWindow);
        action2x->setObjectName("action2x");
        action1_5x = new QAction(MainWindow);
        action1_5x->setObjectName("action1_5x");
        action2x_2 = new QAction(MainWindow);
        action2x_2->setObjectName("action2x_2");
        actionProperties = new QAction(MainWindow);
        actionProperties->setObjectName("actionProperties");
        actionSelect_Artist = new QAction(MainWindow);
        actionSelect_Artist->setObjectName("actionSelect_Artist");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Button_pauseplay = new QPushButton(centralwidget);
        Button_pauseplay->setObjectName("Button_pauseplay");
        Button_pauseplay->setGeometry(QRect(230, 390, 64, 64));
        Button_pauseplay->setMaximumSize(QSize(64, 64));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto")});
        font1.setPointSize(15);
        Button_pauseplay->setFont(font1);
        Button_pauseplay->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(157, 157, 157);\n"
" 	border-style: solid;\n"
" 	border-width:2px;\n"
" 	border-radius:30px;\n"
" 	border-color: black;\n"
"	max-width:60px;\n"
" 	max-height:60px;\n"
" 	min-width:60px;\n"
"	min-height:60px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: rgb(54, 54, 54);\n"
"	border-style: solid;\n"
" 	border-width:2px;\n"
" 	border-radius:30px;\n"
" 	border-color: black;\n"
" 	max-width:60px;\n"
" 	max-height:60px;\n"
" 	min-width:60px;\n"
" 	min-height:60px;\n"
"}"));
        Button_pauseplay->setIconSize(QSize(50, 50));
        BackwardButton = new QPushButton(centralwidget);
        BackwardButton->setObjectName("BackwardButton");
        BackwardButton->setGeometry(QRect(170, 410, 51, 25));
        BackwardButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(157, 157, 157);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:50px;\n"
" border-color: black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: rgb(54, 54, 54);\n"
"	border-style: solid;\n"
"	border-width:2px;\n"
"	border-radius:50px;\n"
"	border-color: black;\n"
"}"));
        ForwardButton = new QPushButton(centralwidget);
        ForwardButton->setObjectName("ForwardButton");
        ForwardButton->setGeometry(QRect(300, 410, 51, 25));
        ForwardButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(157, 157, 157);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:50px;\n"
" border-color: black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: rgb(54, 54, 54);\n"
"	border-style: solid;\n"
"	border-width:2px;\n"
"	border-radius:50px;\n"
"	border-color: black;\n"
"}"));
        StopButton = new QPushButton(centralwidget);
        StopButton->setObjectName("StopButton");
        StopButton->setGeometry(QRect(140, 410, 25, 25));
        StopButton->setLayoutDirection(Qt::LeftToRight);
        StopButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(157, 157, 157);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:50px;\n"
" border-color: black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: rgb(54, 54, 54);\n"
"	border-style: solid;\n"
"	border-width:2px;\n"
"	border-radius:50px;\n"
"	border-color: black;\n"
"}"));
        RepeatButton = new QPushButton(centralwidget);
        RepeatButton->setObjectName("RepeatButton");
        RepeatButton->setGeometry(QRect(110, 410, 25, 25));
        RepeatButton->setLayoutDirection(Qt::LeftToRight);
        RepeatButton->setStyleSheet(QString::fromUtf8("background-color: rgb(157, 157, 157);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:50px;\n"
" border-color: black;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/debug/icons8-repeat-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        RepeatButton->setIcon(icon);
        ShuffleButton = new QPushButton(centralwidget);
        ShuffleButton->setObjectName("ShuffleButton");
        ShuffleButton->setGeometry(QRect(80, 410, 25, 25));
        ShuffleButton->setLayoutDirection(Qt::LeftToRight);
        ShuffleButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(157, 157, 157);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:50px;\n"
" border-color: black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: rgb(54, 54, 54);\n"
"	border-style: solid;\n"
"	border-width:2px;\n"
"	border-radius:50px;\n"
"	border-color: black;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/debug/icons8-shuffle-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShuffleButton->setIcon(icon1);
        VolumeSlider = new QSlider(centralwidget);
        VolumeSlider->setObjectName("VolumeSlider");
        VolumeSlider->setGeometry(QRect(390, 415, 121, 16));
        VolumeSlider->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"background-color: rgba( 255, 255, 255, 0% );"));
        VolumeSlider->setOrientation(Qt::Horizontal);
        SongName = new QLabel(centralwidget);
        SongName->setObjectName("SongName");
        SongName->setGeometry(QRect(10, 320, 501, 41));
        SongName->setAlignment(Qt::AlignCenter);
        SongName->setWordWrap(true);
        TimelineBar = new QSlider(centralwidget);
        TimelineBar->setObjectName("TimelineBar");
        TimelineBar->setGeometry(QRect(10, 360, 501, 16));
        TimelineBar->setOrientation(Qt::Horizontal);
        VolumeButton = new QPushButton(centralwidget);
        VolumeButton->setObjectName("VolumeButton");
        VolumeButton->setGeometry(QRect(360, 410, 25, 25));
        VolumeButton->setLayoutDirection(Qt::RightToLeft);
        VolumeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(157, 157, 157);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:50px;\n"
" border-color: black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: rgb(54, 54, 54);\n"
"	border-style: solid;\n"
"	border-width:2px;\n"
"	border-radius:50px;\n"
"	border-color: black;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/debug/icons8-volume-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/Downloads/icons8-mute-50.png"), QSize(), QIcon::Normal, QIcon::On);
        VolumeButton->setIcon(icon2);
        CurrenTime = new QLabel(centralwidget);
        CurrenTime->setObjectName("CurrenTime");
        CurrenTime->setGeometry(QRect(10, 380, 71, 16));
        TotalTime = new QLabel(centralwidget);
        TotalTime->setObjectName("TotalTime");
        TotalTime->setGeometry(QRect(460, 380, 61, 16));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 10, 501, 311));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 499, 309));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        SongList = new QLabel(scrollAreaWidgetContents);
        SongList->setObjectName("SongList");
        SongList->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(SongList, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 520, 21));
        menuOpen = new QMenu(menubar);
        menuOpen->setObjectName("menuOpen");
        menuPlayBack_Speed = new QMenu(menubar);
        menuPlayBack_Speed->setObjectName("menuPlayBack_Speed");
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuOpen->menuAction());
        menubar->addAction(menuPlayBack_Speed->menuAction());
        menubar->addAction(menu->menuAction());
        menuOpen->addAction(actionSelect_Audio_File);
        menuOpen->addAction(actionSelect_Artist);
        menuPlayBack_Speed->addAction(action1x);
        menuPlayBack_Speed->addAction(action2x);
        menuPlayBack_Speed->addAction(action1_5x);
        menuPlayBack_Speed->addAction(action2x_2);
        menu->addAction(actionProperties);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSelect_Audio_File->setText(QCoreApplication::translate("MainWindow", "Select Audio File", nullptr));
        action1x->setText(QCoreApplication::translate("MainWindow", "0.5x", nullptr));
        action2x->setText(QCoreApplication::translate("MainWindow", "1x", nullptr));
        action1_5x->setText(QCoreApplication::translate("MainWindow", "1.5x", nullptr));
        action2x_2->setText(QCoreApplication::translate("MainWindow", "2x", nullptr));
        actionProperties->setText(QCoreApplication::translate("MainWindow", "Properties", nullptr));
        actionSelect_Artist->setText(QCoreApplication::translate("MainWindow", "Select Artist", nullptr));
        Button_pauseplay->setText(QString());
        BackwardButton->setText(QString());
        ForwardButton->setText(QString());
        StopButton->setText(QString());
        RepeatButton->setText(QString());
        ShuffleButton->setText(QString());
        SongName->setText(QCoreApplication::translate("MainWindow", "<Song Name Displayed Here>", nullptr));
        VolumeButton->setText(QString());
        CurrenTime->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        TotalTime->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        SongList->setText(QCoreApplication::translate("MainWindow", "<Song List Displayed Here>", nullptr));
        menuOpen->setTitle(QCoreApplication::translate("MainWindow", "Open", nullptr));
        menuPlayBack_Speed->setTitle(QCoreApplication::translate("MainWindow", "PlayBack Speed", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
