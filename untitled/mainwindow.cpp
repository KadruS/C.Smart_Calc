#include "mainwindow.h"
#include "ui_mainwindow.h"

extern "C" {
#include "../smart_cal.h"
}

#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->widget->xAxis->setRange(-10, 10);
    ui->widget->yAxis->setRange(-2, 2);

    connect(ui->graphButton, SIGNAL(clicked()), this, SLOT(plot_graph()));
    connect(ui->clearButton, SIGNAL(clicked()), this, SLOT(clear_input()));

    connect(ui->oneButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->twoButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->threeButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->fourButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->fiveButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->sixButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->sevenButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->eightButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->nineButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    // connect(ui->zeroButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->dotButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->xButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->leftPButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->rightPButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));

    connect(ui->mulButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->plusButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->minusButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->divButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->modButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->powButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->sqrtButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->lnButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->logButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));

    connect(ui->sinButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->asinButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->cosButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->acosButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->tanButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
    connect(ui->atanButton, SIGNAL(clicked()), this, SLOT(add_text_buttons()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

// EQUAL BUTTON PRESSED
void MainWindow::on_equalButton_clicked()
{
    bool is_valid_input = true;
    QString stri =  ui->inputField->text();
    QByteArray arr = stri.toUtf8();
    char *input = arr.data();

    if (stri.isEmpty()) {
        is_valid_input = false;
        ui->outputField->setText(QString::fromStdString("ENTER EXPRESSION!"));
    }

    bool is_valid_x = false;
    QString x_str = ui->xEdit->text();
    double x = x_str.toDouble(&is_valid_x);

    if (!is_valid_x && strchr(input, 'x')) {
        ui->outputField->setText(QString::fromStdString("INVALID X!"));
    } else {
        is_valid_x = true;
    }

    if (is_valid_x && is_valid_input) {
        double output = 0;

        queue_n queue;
        createQueue(&queue);

        stack_n stack = {0};
        createStack(&stack);

        if (convertToReversePolish(&queue, &stack, input) != 0) {
            ui->outputField->setText(QString::fromStdString("ERROR"));
        } else {
            if (fromKurwaToAnswer(&queue, &stack, x, &output) != 0) {
                ui->outputField->setText(QString::fromStdString("ERROR"));
            } else {
                ui->outputField->setText(QString::fromStdString(std::to_string(output)));
            }
        }
    }
}


void MainWindow::add_text_buttons() {
    QPushButton *button = (QPushButton *)sender();
    ui->inputField->insert(button->text());
}

void MainWindow::clear_input() {
    ui->inputField->clear();
}

void MainWindow::plot_graph() {
    x.clear();
    y.clear();
    ui->widget->clearGraphs();

    bool is_valid_x_from;
    double xFrom = ui->xFrom->text().toDouble(&is_valid_x_from);
    bool is_valid_x_to;
    double xTo = ui->xTo->text().toDouble(&is_valid_x_to);
    bool is_valid_y_from;
    double yFrom = ui->yFrom->text().toDouble(&is_valid_y_from);
    bool is_valid_y_to;
    double yTo = ui->yTo->text().toDouble(&is_valid_y_to);    

    if (!is_valid_x_from || !is_valid_x_to || !is_valid_y_from || !is_valid_y_to) {
        ui->outputField->setText(QString::fromStdString("INVALID GRAPH AREA"));
    } else {
        ui->outputField->setText(QString::fromStdString(""));
        ui->widget->xAxis->setRange(xFrom, xTo);
        ui->widget->yAxis->setRange(yFrom, yTo);

        bool is_valid_input = true;
        QString stri =  ui->inputField->text();
        QByteArray arr = stri.toUtf8();
        char *input = arr.data();

        if (stri.isEmpty()) {
            is_valid_input = false;
            ui->outputField->setText(QString::fromStdString("ENTER EXPRESSION!"));
        }

        if (is_valid_input) {
            double output = 0;
            h = (xTo - xFrom)/10000;
            int flag = 0;
            while(xFrom <= xTo) {
                queue_n queue_main;
                createQueue(&queue_main);

                stack_n stack_main = {0};
                createStack(&stack_main);

                if (convertToReversePolish(&queue_main, &stack_main, input) != 0) {
                    ui->outputField->setText(QString::fromStdString("ERROR"));
                    // error = 1;
                } else {
                        queue_n queue = queue_main;
                        stack_n stack = stack_main;

                        if (fromKurwaToAnswer(&queue, &stack, xFrom, &output) == 0) {
                            flag = 1;
                            x.push_back(xFrom);
                            y.push_back(output);
                        } else {
                            ui->outputField->setText(QString::fromStdString("ERROR"));
                        }
                }
                xFrom += h;
            }
            if(!flag) {
                ui->outputField->setText(QString::fromStdString("ERROR"));
            }
            ui->widget->addGraph();
            ui->widget->graph(0)->addData(x, y);
            ui->widget->replot();
        }
    }
}




void MainWindow::on_zeroButton_clicked()
{
    ui->inputField->insert(ui->zeroButton->text());
}

