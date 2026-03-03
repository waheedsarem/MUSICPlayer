#include "artist_name_enter.h"
#include "ui_artist_name_enter.h"


Artist_name_enter::Artist_name_enter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Artist_name_enter)
{
    ui->setupUi(this);
}

Artist_name_enter::~Artist_name_enter()
{
    delete ui;
}

void Artist_name_enter::on_EnterButton_clicked()
{
    QString ArtistName = ui->ArtistNameBox->text().trimmed();

    QString directoryPath = "C:/Users/wahee/Music"; // Change this to your actual music directory path

    QDir directory(directoryPath);
    bool artistExists = directory.exists(ArtistName);

    if (artistExists) {
        QMessageBox::information(this, "Artist Check", "Artist folder exists!");
        emit artistFound(ArtistName);  // Emit the signal with the artist's name
        this->accept();  // Close the dialog

    } else {
        QMessageBox::warning(this, "Artist Check", "No folder for this artist found.");
    }
}

