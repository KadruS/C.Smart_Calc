#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void add_text_buttons();

    void clear_input();

    void plot_graph();

    void on_equalButton_clicked();

    void on_zeroButton_clicked();

private:
    Ui::MainWindow *ui;
    double xBegin, xEnd, h;

    QVector<double> x,y;
};
#endif // MAINWINDOW_H
