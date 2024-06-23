#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);


    //connect包含三个参数
    //发出者 --> ui中的某个按键
    //对应的事件 --> 一般是点击，也可以是按下或者其他类型
    //接受者：因为是在窗口的构造函数中申明的，因此接受者应该是这个窗口,也就是this指针指向的Dialog对象
    //按键按下后，对应的响应事件，也就是我们自己所写的槽函数
    connect(ui->radio_Bt_Black,SIGNAL(clicked()),this,SLOT(Set_Color()));
    connect(ui->radio_Bt_Blue,  SIGNAL(clicked()),this,SLOT(Set_Color()));
    connect(ui->radio_Bt_Red, SIGNAL(clicked()),this,SLOT(Set_Color()));
}

Dialog::~Dialog()
{
    delete ui;
}


//下划线函数
void Dialog::on_Check_Underline_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}

//italin函数
void Dialog::on_Check_Italic_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}

//
void Dialog::on_Check_Bold_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}

void Dialog::Set_Color()
{
    QPalette p = ui->plainTextEdit->palette();
    
    if(ui->radio_Bt_Black->isChecked())
        p.setColor(QPalette::Text, Qt::black);
    else if(ui->radio_Bt_Blue->isChecked())
        p.setColor(QPalette::Text, Qt::blue);
    else if(ui->radio_Bt_Red->isChecked())
        p.setColor(QPalette::Text, Qt::red);
    else
        p.setColor(QPalette::Text, Qt::black);

    ui->plainTextEdit->setPalette(p);
}
