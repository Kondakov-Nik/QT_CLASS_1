// @author Кондаков Н.С.
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calc.h"

// конструктор главного окна
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)  // явный вызов конструктора базового класса
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Объект ui содержит все классы-элементы интерфейса,
    // расположенные на главном окне.
    // класс для ui генерируется автоматически из дизайна окна
}

MainWindow::~MainWindow()
{
    delete ui;
}

// обработчик события -- клик на кнопку
// обработчик создан в дизайнере форм
void MainWindow::on_Button_calc_clicked()
{
    float a = ui->lineEdit_vvod->text().toFloat();
    float v = v_kub(a);
    float s = s_kub(a);
    ui-> label_result_V ->setText(QString::number(v));
    ui-> label_result_S ->setText(QString::number(s));

}


void MainWindow::on_about_author_triggered()
{
    QMessageBox::about(this, "Об авторе", "Автор: Кондаков Никита Сергеевич");
}

