/********************************************************************************
** Form generated from reading UI file 'mainfile1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFILE1_H
#define UI_MAINFILE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainFile1
{
public:
    QWidget *centralwidget;
    QLabel *firstno;
    QLabel *secondno;
    QLabel *result;
    QPushButton *btnAdd;
    QPushButton *btnMinus;
    QPushButton *btnMultiply;
    QPushButton *btnDivide;
    QLineEdit *txtFirst;
    QLineEdit *txtSecond;
    QLineEdit *txtResult;

    void setupUi(QMainWindow *MainFile1)
    {
        if (MainFile1->objectName().isEmpty())
            MainFile1->setObjectName("MainFile1");
        MainFile1->resize(491, 323);
        centralwidget = new QWidget(MainFile1);
        centralwidget->setObjectName("centralwidget");
        firstno = new QLabel(centralwidget);
        firstno->setObjectName("firstno");
        firstno->setGeometry(QRect(40, 70, 91, 20));
        secondno = new QLabel(centralwidget);
        secondno->setObjectName("secondno");
        secondno->setGeometry(QRect(40, 110, 91, 21));
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(40, 150, 61, 21));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(40, 210, 80, 24));
        btnMinus = new QPushButton(centralwidget);
        btnMinus->setObjectName("btnMinus");
        btnMinus->setGeometry(QRect(150, 210, 80, 24));
        btnMultiply = new QPushButton(centralwidget);
        btnMultiply->setObjectName("btnMultiply");
        btnMultiply->setGeometry(QRect(260, 210, 80, 24));
        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName("btnDivide");
        btnDivide->setGeometry(QRect(370, 210, 80, 24));
        txtFirst = new QLineEdit(centralwidget);
        txtFirst->setObjectName("txtFirst");
        txtFirst->setGeometry(QRect(200, 70, 251, 24));
        txtSecond = new QLineEdit(centralwidget);
        txtSecond->setObjectName("txtSecond");
        txtSecond->setGeometry(QRect(200, 110, 251, 24));
        txtResult = new QLineEdit(centralwidget);
        txtResult->setObjectName("txtResult");
        txtResult->setGeometry(QRect(200, 150, 251, 24));
        txtResult->setReadOnly(true);
        MainFile1->setCentralWidget(centralwidget);

        retranslateUi(MainFile1);

        QMetaObject::connectSlotsByName(MainFile1);
    } // setupUi

    void retranslateUi(QMainWindow *MainFile1)
    {
        MainFile1->setWindowTitle(QCoreApplication::translate("MainFile1", "MainFile1", nullptr));
        firstno->setText(QCoreApplication::translate("MainFile1", "First No. :-", nullptr));
        secondno->setText(QCoreApplication::translate("MainFile1", "Second No. :-", nullptr));
        result->setText(QCoreApplication::translate("MainFile1", "RESULT :-", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainFile1", "+", nullptr));
        btnMinus->setText(QCoreApplication::translate("MainFile1", "-", nullptr));
        btnMultiply->setText(QCoreApplication::translate("MainFile1", "*", nullptr));
        btnDivide->setText(QCoreApplication::translate("MainFile1", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainFile1: public Ui_MainFile1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFILE1_H
