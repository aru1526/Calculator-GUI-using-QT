#include "mainfile1.h"
#include "ui_mainfile1.h"

MainFile1::MainFile1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainFile1)
{
    ui->setupUi(this);
}

MainFile1::~MainFile1()
{
    delete ui;
}
int firstNum,secondNum, result;
void MainFile1::on_btnAdd_clicked()
{
    firstNum= ui->txtFirst->text().toInt();
    secondNum= ui->txtSecond->text().toInt();
    result= firstNum+secondNum;
    ui->txtResult->setText(QString::number(result));

}


void MainFile1::on_btnMinus_clicked()
{
    firstNum= ui->txtFirst->text().toInt();
    secondNum= ui->txtSecond->text().toInt();
    result= firstNum-secondNum;
    ui->txtResult->setText(QString::number(result));

}


void MainFile1::on_btnMultiply_clicked()
{
    firstNum= ui->txtFirst->text().toInt();
    secondNum= ui->txtSecond->text().toInt();
    result= firstNum*secondNum;
    ui->txtResult->setText(QString::number(result));
}


void MainFile1::on_btnDivide_clicked()
{
    firstNum= ui->txtFirst->text().toInt();
    secondNum= ui->txtSecond->text().toInt();
    result= firstNum/secondNum;
    ui->txtResult->setText(QString::number(result));
}

