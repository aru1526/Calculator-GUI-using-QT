#ifndef MAINFILE1_H
#define MAINFILE1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainFile1;
}
QT_END_NAMESPACE

class MainFile1 : public QMainWindow
{
    Q_OBJECT

public:
    MainFile1(QWidget *parent = nullptr);
    ~MainFile1();

private slots:
    void on_btnAdd_clicked();

    void on_btnMinus_clicked();

    void on_btnMultiply_clicked();

    void on_btnDivide_clicked();

private:
    Ui::MainFile1 *ui;
};
#endif // MAINFILE1_H
