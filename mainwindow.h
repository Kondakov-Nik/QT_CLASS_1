#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; } // класс содержащий элементы UI
QT_END_NAMESPACE

// Создаётся новый класс для главного окна на основе существующего
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Button_calc_clicked(); //обработчк события при нажатии на кнопку

    void on_about_author_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
