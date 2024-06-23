/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPlainTextEdit *plainTextEdit;
    QGroupBox *GB_SIze;
    QCheckBox *Check_Underline;
    QCheckBox *Check_Italic;
    QCheckBox *Check_Bold;
    QGroupBox *GB_Color;
    QRadioButton *radio_Bt_Black;
    QRadioButton *radio_Bt_Red;
    QRadioButton *radio_Bt_Blue;
    QPushButton *Bt_Clear;
    QPushButton *Bt_OK;
    QPushButton *Bt_Close;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1262, 582);
        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(210, 250, 831, 221));
        plainTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        GB_SIze = new QGroupBox(Dialog);
        GB_SIze->setObjectName("GB_SIze");
        GB_SIze->setGeometry(QRect(210, 20, 831, 101));
        GB_SIze->setCursor(QCursor(Qt::PointingHandCursor));
        GB_SIze->setLayoutDirection(Qt::LeftToRight);
        GB_SIze->setAutoFillBackground(true);
        GB_SIze->setFlat(true);
        GB_SIze->setCheckable(false);
        Check_Underline = new QCheckBox(GB_SIze);
        Check_Underline->setObjectName("Check_Underline");
        Check_Underline->setGeometry(QRect(60, 50, 121, 31));
        Check_Italic = new QCheckBox(GB_SIze);
        Check_Italic->setObjectName("Check_Italic");
        Check_Italic->setGeometry(QRect(330, 50, 121, 31));
        Check_Bold = new QCheckBox(GB_SIze);
        Check_Bold->setObjectName("Check_Bold");
        Check_Bold->setGeometry(QRect(650, 50, 121, 31));
        GB_Color = new QGroupBox(Dialog);
        GB_Color->setObjectName("GB_Color");
        GB_Color->setGeometry(QRect(210, 120, 831, 111));
        GB_Color->setCursor(QCursor(Qt::PointingHandCursor));
        GB_Color->setLayoutDirection(Qt::LeftToRight);
        GB_Color->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        GB_Color->setFlat(true);
        radio_Bt_Black = new QRadioButton(GB_Color);
        radio_Bt_Black->setObjectName("radio_Bt_Black");
        radio_Bt_Black->setGeometry(QRect(60, 60, 120, 25));
        radio_Bt_Red = new QRadioButton(GB_Color);
        radio_Bt_Red->setObjectName("radio_Bt_Red");
        radio_Bt_Red->setGeometry(QRect(330, 60, 120, 25));
        radio_Bt_Blue = new QRadioButton(GB_Color);
        radio_Bt_Blue->setObjectName("radio_Bt_Blue");
        radio_Bt_Blue->setGeometry(QRect(650, 60, 120, 25));
        Bt_Clear = new QPushButton(Dialog);
        Bt_Clear->setObjectName("Bt_Clear");
        Bt_Clear->setGeometry(QRect(210, 490, 111, 51));
        Bt_Clear->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Data/Exit.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Bt_Clear->setIcon(icon);
        Bt_OK = new QPushButton(Dialog);
        Bt_OK->setObjectName("Bt_OK");
        Bt_OK->setGeometry(QRect(590, 490, 111, 51));
        Bt_OK->setCursor(QCursor(Qt::PointingHandCursor));
        Bt_Close = new QPushButton(Dialog);
        Bt_Close->setObjectName("Bt_Close");
        Bt_Close->setGeometry(QRect(920, 490, 121, 51));
        Bt_Close->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(Dialog);
        QObject::connect(Bt_Close, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::close));
        QObject::connect(Bt_Clear, &QPushButton::clicked, plainTextEdit, qOverload<>(&QPlainTextEdit::clear));
        QObject::connect(Bt_OK, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        GB_SIze->setTitle(QCoreApplication::translate("Dialog", "\345\255\227\344\275\223", nullptr));
        Check_Underline->setText(QCoreApplication::translate("Dialog", "Underline", nullptr));
        Check_Italic->setText(QCoreApplication::translate("Dialog", "Italic", nullptr));
        Check_Bold->setText(QCoreApplication::translate("Dialog", "Bold", nullptr));
        GB_Color->setTitle(QCoreApplication::translate("Dialog", "\351\242\234\350\211\262", nullptr));
        radio_Bt_Black->setText(QCoreApplication::translate("Dialog", "Black", nullptr));
        radio_Bt_Red->setText(QCoreApplication::translate("Dialog", "Red", nullptr));
        radio_Bt_Blue->setText(QCoreApplication::translate("Dialog", "Blue", nullptr));
        Bt_Clear->setText(QCoreApplication::translate("Dialog", "CLear", nullptr));
        Bt_OK->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        Bt_Close->setText(QCoreApplication::translate("Dialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
