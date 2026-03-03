#ifndef ARTIST_NAME_ENTER_H
#define ARTIST_NAME_ENTER_H

#include <QDialog>
#include <QDir>
#include <QMessageBox>

namespace Ui {
class Artist_name_enter;
}

class Artist_name_enter : public QDialog
{
    Q_OBJECT

public:
    explicit Artist_name_enter(QWidget *parent = nullptr);
    ~Artist_name_enter();

signals:
    void artistFound(const QString &artistName);

private slots:
    void on_EnterButton_clicked();

private:
    Ui::Artist_name_enter *ui;
};

#endif // ARTIST_NAME_ENTER_H
