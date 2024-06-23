#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:

    void on_Check_Underline_clicked(bool checked);

    void on_Check_Italic_clicked(bool checked);

    void on_Check_Bold_clicked(bool checked);

    void Set_Color();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
