/********************************************************************************
** Form generated from reading UI file 'artist_name_enter.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARTIST_NAME_ENTER_H
#define UI_ARTIST_NAME_ENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Artist_name_enter
{
public:
    QLabel *EnterArtistName;
    QLineEdit *ArtistNameBox;
    QPushButton *EnterButton;

    void setupUi(QDialog *Artist_name_enter)
    {
        if (Artist_name_enter->objectName().isEmpty())
            Artist_name_enter->setObjectName("Artist_name_enter");
        Artist_name_enter->resize(390, 253);
        Artist_name_enter->setMinimumSize(QSize(390, 253));
        Artist_name_enter->setMaximumSize(QSize(390, 253));
        QFont font;
        font.setFamilies({QString::fromUtf8("Lato")});
        font.setPointSize(10);
        Artist_name_enter->setFont(font);
        EnterArtistName = new QLabel(Artist_name_enter);
        EnterArtistName->setObjectName("EnterArtistName");
        EnterArtistName->setGeometry(QRect(70, 40, 151, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Lato")});
        font1.setPointSize(12);
        EnterArtistName->setFont(font1);
        ArtistNameBox = new QLineEdit(Artist_name_enter);
        ArtistNameBox->setObjectName("ArtistNameBox");
        ArtistNameBox->setGeometry(QRect(70, 80, 251, 51));
        ArtistNameBox->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(43, 43, 43);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius:50px;\n"
"color: white;\n"
"\n"
"\n"
""));
        EnterButton = new QPushButton(Artist_name_enter);
        EnterButton->setObjectName("EnterButton");
        EnterButton->setGeometry(QRect(70, 140, 81, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(12);
        EnterButton->setFont(font2);
        EnterButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(157, 157, 157);\n"
"	border-style: solid;\n"
" 	border-width:2px;\n"
" 	border-radius:50px;\n"
" 	border-color: black;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: rgb(54, 54, 54);\n"
"	border-style: solid;\n"
"	border-width:2px;\n"
"	border-radius:50px;\n"
"	border-color: black;\n"
"	color: black;\n"
"}"));

        retranslateUi(Artist_name_enter);

        QMetaObject::connectSlotsByName(Artist_name_enter);
    } // setupUi

    void retranslateUi(QDialog *Artist_name_enter)
    {
        Artist_name_enter->setWindowTitle(QCoreApplication::translate("Artist_name_enter", "Dialog", nullptr));
        EnterArtistName->setText(QCoreApplication::translate("Artist_name_enter", "Enter Artist Name:", nullptr));
        EnterButton->setText(QCoreApplication::translate("Artist_name_enter", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Artist_name_enter: public Ui_Artist_name_enter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARTIST_NAME_ENTER_H
