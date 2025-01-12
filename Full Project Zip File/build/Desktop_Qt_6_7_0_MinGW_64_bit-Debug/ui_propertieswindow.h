/********************************************************************************
** Form generated from reading UI file 'propertieswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESWINDOW_H
#define UI_PROPERTIESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_PropertiesWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *Name_Label;
    QLabel *Path_Label;
    QLabel *Size_Label;
    QLabel *Duration_Label;
    QLabel *Bitrate_Label;
    QLabel *label_6;
    QLabel *Year_Label;
    QLabel *label_7;
    QLabel *Bitrate;

    void setupUi(QDialog *PropertiesWindow)
    {
        if (PropertiesWindow->objectName().isEmpty())
            PropertiesWindow->setObjectName("PropertiesWindow");
        PropertiesWindow->setEnabled(true);
        PropertiesWindow->resize(371, 281);
        PropertiesWindow->setMinimumSize(QSize(371, 281));
        PropertiesWindow->setMaximumSize(QSize(371, 281));
        QFont font;
        font.setFamilies({QString::fromUtf8("Lato")});
        font.setPointSize(10);
        PropertiesWindow->setFont(font);
        label = new QLabel(PropertiesWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 49, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Lato")});
        font1.setPointSize(10);
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(PropertiesWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 210, 49, 16));
        label_2->setFont(font1);
        label_3 = new QLabel(PropertiesWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 130, 49, 16));
        label_3->setFont(font1);
        label_4 = new QLabel(PropertiesWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 170, 49, 16));
        label_4->setFont(font1);
        label_5 = new QLabel(PropertiesWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(200, 130, 61, 16));
        label_5->setFont(font1);
        Name_Label = new QLabel(PropertiesWindow);
        Name_Label->setObjectName("Name_Label");
        Name_Label->setGeometry(QRect(100, 30, 241, 31));
        Name_Label->setFont(font);
        Name_Label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        Name_Label->setWordWrap(true);
        Path_Label = new QLabel(PropertiesWindow);
        Path_Label->setObjectName("Path_Label");
        Path_Label->setGeometry(QRect(100, 210, 241, 31));
        Path_Label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        Path_Label->setWordWrap(true);
        Size_Label = new QLabel(PropertiesWindow);
        Size_Label->setObjectName("Size_Label");
        Size_Label->setGeometry(QRect(100, 130, 81, 16));
        Duration_Label = new QLabel(PropertiesWindow);
        Duration_Label->setObjectName("Duration_Label");
        Duration_Label->setGeometry(QRect(100, 170, 71, 16));
        Bitrate_Label = new QLabel(PropertiesWindow);
        Bitrate_Label->setObjectName("Bitrate_Label");
        Bitrate_Label->setGeometry(QRect(280, 130, 81, 16));
        label_6 = new QLabel(PropertiesWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 80, 49, 16));
        label_6->setFont(font1);
        Year_Label = new QLabel(PropertiesWindow);
        Year_Label->setObjectName("Year_Label");
        Year_Label->setGeometry(QRect(100, 80, 221, 16));
        label_7 = new QLabel(PropertiesWindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(200, 170, 49, 16));
        label_7->setFont(font1);
        Bitrate = new QLabel(PropertiesWindow);
        Bitrate->setObjectName("Bitrate");
        Bitrate->setGeometry(QRect(280, 170, 81, 16));

        retranslateUi(PropertiesWindow);

        QMetaObject::connectSlotsByName(PropertiesWindow);
    } // setupUi

    void retranslateUi(QDialog *PropertiesWindow)
    {
        PropertiesWindow->setWindowTitle(QCoreApplication::translate("PropertiesWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PropertiesWindow", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("PropertiesWindow", "Path:", nullptr));
        label_3->setText(QCoreApplication::translate("PropertiesWindow", "Size:", nullptr));
        label_4->setText(QCoreApplication::translate("PropertiesWindow", "Duration:", nullptr));
        label_5->setText(QCoreApplication::translate("PropertiesWindow", "Item Type:", nullptr));
        Name_Label->setText(QCoreApplication::translate("PropertiesWindow", "TextLabel", nullptr));
        Path_Label->setText(QCoreApplication::translate("PropertiesWindow", "TextLabel", nullptr));
        Size_Label->setText(QCoreApplication::translate("PropertiesWindow", "TextLabel", nullptr));
        Duration_Label->setText(QCoreApplication::translate("PropertiesWindow", "TextLabel", nullptr));
        Bitrate_Label->setText(QCoreApplication::translate("PropertiesWindow", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("PropertiesWindow", "Artist:", nullptr));
        Year_Label->setText(QCoreApplication::translate("PropertiesWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("PropertiesWindow", "Bitrate:", nullptr));
        Bitrate->setText(QCoreApplication::translate("PropertiesWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertiesWindow: public Ui_PropertiesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESWINDOW_H
