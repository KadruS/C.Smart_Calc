/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *outputField;
    QCustomPlot *widget;
    QLineEdit *xFrom;
    QLineEdit *xTo;
    QLineEdit *yFrom;
    QLineEdit *yTo;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *powButton;
    QLineEdit *inputField;
    QLineEdit *xEdit;
    QPushButton *modButton;
    QPushButton *logButton;
    QPushButton *divButton;
    QPushButton *mulButton;
    QPushButton *equalButton;
    QPushButton *minusButton;
    QPushButton *plusButton;
    QPushButton *sqrtButton;
    QPushButton *lnButton;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *acosButton;
    QPushButton *graphButton;
    QPushButton *tanButton;
    QPushButton *sinButton;
    QPushButton *cosButton;
    QPushButton *asinButton;
    QPushButton *atanButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *fourButton;
    QPushButton *sevenButton;
    QPushButton *oneButton;
    QPushButton *zeroButton;
    QPushButton *eightButton;
    QPushButton *nineButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QPushButton *dotButton;
    QPushButton *xButton;
    QPushButton *rightPButton;
    QPushButton *leftPButton;
    QPushButton *clearButton;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(832, 681);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);\n"
"border-radius:10px;\n"
"color:black;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        outputField = new QLabel(centralwidget);
        outputField->setObjectName("outputField");
        outputField->setEnabled(true);
        outputField->setGeometry(QRect(20, 310, 771, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(outputField->sizePolicy().hasHeightForWidth());
        outputField->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        outputField->setFont(font);
        outputField->setLayoutDirection(Qt::LeftToRight);
        outputField->setAutoFillBackground(false);
        outputField->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-radius: 10px;"));
        outputField->setAlignment(Qt::AlignCenter);
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 9, 631, 291));
        widget->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        xFrom = new QLineEdit(centralwidget);
        xFrom->setObjectName("xFrom");
        xFrom->setGeometry(QRect(710, 40, 101, 25));
        xFrom->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        xFrom->setAlignment(Qt::AlignCenter);
        xTo = new QLineEdit(centralwidget);
        xTo->setObjectName("xTo");
        xTo->setGeometry(QRect(710, 90, 101, 25));
        xTo->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        xTo->setAlignment(Qt::AlignCenter);
        yFrom = new QLineEdit(centralwidget);
        yFrom->setObjectName("yFrom");
        yFrom->setGeometry(QRect(710, 140, 101, 25));
        yFrom->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        yFrom->setAlignment(Qt::AlignCenter);
        yTo = new QLineEdit(centralwidget);
        yTo->setObjectName("yTo");
        yTo->setGeometry(QRect(710, 190, 101, 25));
        yTo->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        yTo->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(660, 40, 51, 17));
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(74, 74, 74);\n"
"color:rgb(246, 245, 244);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(660, 90, 41, 17));
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgb(74, 74, 74);\n"
"color:rgb(246, 245, 244);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(660, 140, 51, 17));
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgb(74, 74, 74);\n"
"color:rgb(246, 245, 244);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(660, 190, 41, 17));
        label_4->setStyleSheet(QString::fromUtf8("background-color:rgb(74, 74, 74);\n"
"color:rgb(246, 245, 244);"));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(310, 380, 261, 261));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        powButton = new QPushButton(gridLayoutWidget_2);
        powButton->setObjectName("powButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(powButton->sizePolicy().hasHeightForWidth());
        powButton->setSizePolicy(sizePolicy1);
        powButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout_2->addWidget(powButton, 4, 1, 1, 1);

        inputField = new QLineEdit(gridLayoutWidget_2);
        inputField->setObjectName("inputField");
        sizePolicy1.setHeightForWidth(inputField->sizePolicy().hasHeightForWidth());
        inputField->setSizePolicy(sizePolicy1);
        inputField->setFont(font);
        inputField->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout_2->addWidget(inputField, 0, 0, 1, 3);

        xEdit = new QLineEdit(gridLayoutWidget_2);
        xEdit->setObjectName("xEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(xEdit->sizePolicy().hasHeightForWidth());
        xEdit->setSizePolicy(sizePolicy2);
        xEdit->setFocusPolicy(Qt::StrongFocus);
        xEdit->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        xEdit->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(xEdit, 6, 0, 1, 1);

        modButton = new QPushButton(gridLayoutWidget_2);
        modButton->setObjectName("modButton");
        sizePolicy1.setHeightForWidth(modButton->sizePolicy().hasHeightForWidth());
        modButton->setSizePolicy(sizePolicy1);
        modButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout_2->addWidget(modButton, 3, 2, 1, 1);

        logButton = new QPushButton(gridLayoutWidget_2);
        logButton->setObjectName("logButton");
        sizePolicy1.setHeightForWidth(logButton->sizePolicy().hasHeightForWidth());
        logButton->setSizePolicy(sizePolicy1);
        logButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout_2->addWidget(logButton, 6, 1, 1, 1);

        divButton = new QPushButton(gridLayoutWidget_2);
        divButton->setObjectName("divButton");
        sizePolicy1.setHeightForWidth(divButton->sizePolicy().hasHeightForWidth());
        divButton->setSizePolicy(sizePolicy1);
        divButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout_2->addWidget(divButton, 3, 1, 1, 1);

        mulButton = new QPushButton(gridLayoutWidget_2);
        mulButton->setObjectName("mulButton");
        sizePolicy1.setHeightForWidth(mulButton->sizePolicy().hasHeightForWidth());
        mulButton->setSizePolicy(sizePolicy1);
        mulButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout_2->addWidget(mulButton, 5, 0, 1, 1);

        equalButton = new QPushButton(gridLayoutWidget_2);
        equalButton->setObjectName("equalButton");
        sizePolicy1.setHeightForWidth(equalButton->sizePolicy().hasHeightForWidth());
        equalButton->setSizePolicy(sizePolicy1);
        equalButton->setCursor(QCursor(Qt::PointingHandCursor));
        equalButton->setFocusPolicy(Qt::NoFocus);
        equalButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"background-color:rgb(74, 74, 74);\n"
"color: rgb(246, 245, 244)"));
        equalButton->setAutoDefault(true);

        gridLayout_2->addWidget(equalButton, 5, 2, 2, 1);

        minusButton = new QPushButton(gridLayoutWidget_2);
        minusButton->setObjectName("minusButton");
        sizePolicy1.setHeightForWidth(minusButton->sizePolicy().hasHeightForWidth());
        minusButton->setSizePolicy(sizePolicy1);
        minusButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout_2->addWidget(minusButton, 4, 0, 1, 1);

        plusButton = new QPushButton(gridLayoutWidget_2);
        plusButton->setObjectName("plusButton");
        sizePolicy1.setHeightForWidth(plusButton->sizePolicy().hasHeightForWidth());
        plusButton->setSizePolicy(sizePolicy1);
        plusButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout_2->addWidget(plusButton, 3, 0, 1, 1);

        sqrtButton = new QPushButton(gridLayoutWidget_2);
        sqrtButton->setObjectName("sqrtButton");
        sizePolicy1.setHeightForWidth(sqrtButton->sizePolicy().hasHeightForWidth());
        sqrtButton->setSizePolicy(sizePolicy1);
        sqrtButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout_2->addWidget(sqrtButton, 4, 2, 1, 1);

        lnButton = new QPushButton(gridLayoutWidget_2);
        lnButton->setObjectName("lnButton");
        sizePolicy1.setHeightForWidth(lnButton->sizePolicy().hasHeightForWidth());
        lnButton->setSizePolicy(sizePolicy1);
        lnButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout_2->addWidget(lnButton, 5, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(620, 380, 171, 261));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        acosButton = new QPushButton(gridLayoutWidget_3);
        acosButton->setObjectName("acosButton");
        sizePolicy1.setHeightForWidth(acosButton->sizePolicy().hasHeightForWidth());
        acosButton->setSizePolicy(sizePolicy1);
        acosButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));

        gridLayout_3->addWidget(acosButton, 3, 1, 1, 1);

        graphButton = new QPushButton(gridLayoutWidget_3);
        graphButton->setObjectName("graphButton");
        sizePolicy1.setHeightForWidth(graphButton->sizePolicy().hasHeightForWidth());
        graphButton->setSizePolicy(sizePolicy1);
        graphButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"background-color:rgb(74, 74, 74);\n"
"color:rgb(246, 245, 244)"));

        gridLayout_3->addWidget(graphButton, 0, 0, 1, 2);

        tanButton = new QPushButton(gridLayoutWidget_3);
        tanButton->setObjectName("tanButton");
        sizePolicy1.setHeightForWidth(tanButton->sizePolicy().hasHeightForWidth());
        tanButton->setSizePolicy(sizePolicy1);
        tanButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));

        gridLayout_3->addWidget(tanButton, 4, 0, 1, 1);

        sinButton = new QPushButton(gridLayoutWidget_3);
        sinButton->setObjectName("sinButton");
        sizePolicy1.setHeightForWidth(sinButton->sizePolicy().hasHeightForWidth());
        sinButton->setSizePolicy(sizePolicy1);
        sinButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));

        gridLayout_3->addWidget(sinButton, 1, 0, 1, 1);

        cosButton = new QPushButton(gridLayoutWidget_3);
        cosButton->setObjectName("cosButton");
        sizePolicy1.setHeightForWidth(cosButton->sizePolicy().hasHeightForWidth());
        cosButton->setSizePolicy(sizePolicy1);
        cosButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));

        gridLayout_3->addWidget(cosButton, 3, 0, 1, 1);

        asinButton = new QPushButton(gridLayoutWidget_3);
        asinButton->setObjectName("asinButton");
        sizePolicy1.setHeightForWidth(asinButton->sizePolicy().hasHeightForWidth());
        asinButton->setSizePolicy(sizePolicy1);
        asinButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));

        gridLayout_3->addWidget(asinButton, 1, 1, 1, 1);

        atanButton = new QPushButton(gridLayoutWidget_3);
        atanButton->setObjectName("atanButton");
        sizePolicy1.setHeightForWidth(atanButton->sizePolicy().hasHeightForWidth());
        atanButton->setSizePolicy(sizePolicy1);
        atanButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));

        gridLayout_3->addWidget(atanButton, 4, 1, 1, 1);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 380, 261, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        fourButton = new QPushButton(gridLayoutWidget);
        fourButton->setObjectName("fourButton");
        sizePolicy1.setHeightForWidth(fourButton->sizePolicy().hasHeightForWidth());
        fourButton->setSizePolicy(sizePolicy1);
        fourButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout->addWidget(fourButton, 2, 0, 1, 1);

        sevenButton = new QPushButton(gridLayoutWidget);
        sevenButton->setObjectName("sevenButton");
        sizePolicy1.setHeightForWidth(sevenButton->sizePolicy().hasHeightForWidth());
        sevenButton->setSizePolicy(sizePolicy1);
        sevenButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout->addWidget(sevenButton, 1, 0, 1, 1);

        oneButton = new QPushButton(gridLayoutWidget);
        oneButton->setObjectName("oneButton");
        sizePolicy1.setHeightForWidth(oneButton->sizePolicy().hasHeightForWidth());
        oneButton->setSizePolicy(sizePolicy1);
        oneButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout->addWidget(oneButton, 3, 0, 1, 1);

        zeroButton = new QPushButton(gridLayoutWidget);
        zeroButton->setObjectName("zeroButton");
        sizePolicy1.setHeightForWidth(zeroButton->sizePolicy().hasHeightForWidth());
        zeroButton->setSizePolicy(sizePolicy1);
        zeroButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout->addWidget(zeroButton, 4, 0, 1, 1);

        eightButton = new QPushButton(gridLayoutWidget);
        eightButton->setObjectName("eightButton");
        sizePolicy1.setHeightForWidth(eightButton->sizePolicy().hasHeightForWidth());
        eightButton->setSizePolicy(sizePolicy1);
        eightButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout->addWidget(eightButton, 1, 1, 1, 1);

        nineButton = new QPushButton(gridLayoutWidget);
        nineButton->setObjectName("nineButton");
        sizePolicy1.setHeightForWidth(nineButton->sizePolicy().hasHeightForWidth());
        nineButton->setSizePolicy(sizePolicy1);
        nineButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout->addWidget(nineButton, 1, 2, 1, 1);

        fiveButton = new QPushButton(gridLayoutWidget);
        fiveButton->setObjectName("fiveButton");
        sizePolicy1.setHeightForWidth(fiveButton->sizePolicy().hasHeightForWidth());
        fiveButton->setSizePolicy(sizePolicy1);
        fiveButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout->addWidget(fiveButton, 2, 1, 1, 1);

        sixButton = new QPushButton(gridLayoutWidget);
        sixButton->setObjectName("sixButton");
        sizePolicy1.setHeightForWidth(sixButton->sizePolicy().hasHeightForWidth());
        sixButton->setSizePolicy(sizePolicy1);
        sixButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout->addWidget(sixButton, 2, 2, 1, 1);

        twoButton = new QPushButton(gridLayoutWidget);
        twoButton->setObjectName("twoButton");
        sizePolicy1.setHeightForWidth(twoButton->sizePolicy().hasHeightForWidth());
        twoButton->setSizePolicy(sizePolicy1);
        twoButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout->addWidget(twoButton, 3, 1, 1, 1);

        threeButton = new QPushButton(gridLayoutWidget);
        threeButton->setObjectName("threeButton");
        sizePolicy1.setHeightForWidth(threeButton->sizePolicy().hasHeightForWidth());
        threeButton->setSizePolicy(sizePolicy1);
        threeButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout->addWidget(threeButton, 3, 2, 1, 1);

        dotButton = new QPushButton(gridLayoutWidget);
        dotButton->setObjectName("dotButton");
        sizePolicy1.setHeightForWidth(dotButton->sizePolicy().hasHeightForWidth());
        dotButton->setSizePolicy(sizePolicy1);
        dotButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout->addWidget(dotButton, 4, 1, 1, 1);

        xButton = new QPushButton(gridLayoutWidget);
        xButton->setObjectName("xButton");
        sizePolicy1.setHeightForWidth(xButton->sizePolicy().hasHeightForWidth());
        xButton->setSizePolicy(sizePolicy1);
        xButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));

        gridLayout->addWidget(xButton, 4, 2, 1, 1);

        rightPButton = new QPushButton(gridLayoutWidget);
        rightPButton->setObjectName("rightPButton");
        sizePolicy1.setHeightForWidth(rightPButton->sizePolicy().hasHeightForWidth());
        rightPButton->setSizePolicy(sizePolicy1);
        rightPButton->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(74, 74, 74);\n"
"background-color: rgb(74, 74, 74);\n"
"color:rgb(246, 245, 244);"));

        gridLayout->addWidget(rightPButton, 0, 2, 1, 1);

        leftPButton = new QPushButton(gridLayoutWidget);
        leftPButton->setObjectName("leftPButton");
        sizePolicy1.setHeightForWidth(leftPButton->sizePolicy().hasHeightForWidth());
        leftPButton->setSizePolicy(sizePolicy1);
        leftPButton->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(74, 74, 74);\n"
"background-color: rgb(74, 74, 74);\n"
"color:rgb(246, 245, 244);"));

        gridLayout->addWidget(leftPButton, 0, 1, 1, 1);

        clearButton = new QPushButton(gridLayoutWidget);
        clearButton->setObjectName("clearButton");
        clearButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy1);
        clearButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"background-color:rgb(74, 74, 74);\n"
"color:rgb(246, 245, 244)"));

        gridLayout->addWidget(clearButton, 0, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(-4, -24, 841, 381));
        label_5->setStyleSheet(QString::fromUtf8("background-color:rgb(74, 74, 74)"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(-30, 660, 871, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Umpush")});
        font1.setBold(true);
        font1.setItalic(false);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("background-color:rgb(74, 74, 74);\n"
"color:rgb(246, 245, 244);"));
        label_6->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        label_5->raise();
        outputField->raise();
        widget->raise();
        xFrom->raise();
        xTo->raise();
        yFrom->raise();
        yTo->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        gridLayoutWidget_2->raise();
        gridLayoutWidget_3->raise();
        gridLayoutWidget->raise();
        label_6->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 832, 22));
        menubar->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Smart_Cal", nullptr));
        outputField->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        xFrom->setText(QCoreApplication::translate("MainWindow", "-10", nullptr));
        xTo->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        yFrom->setText(QCoreApplication::translate("MainWindow", "-2", nullptr));
        yTo->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X from", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "X to", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Y from", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Y to", nullptr));
        powButton->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        inputField->setText(QString());
#if QT_CONFIG(tooltip)
        xEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        xEdit->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        xEdit->setText(QString());
        modButton->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        logButton->setText(QCoreApplication::translate("MainWindow", "log()", nullptr));
        divButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        mulButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        equalButton->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        minusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        plusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        sqrtButton->setText(QCoreApplication::translate("MainWindow", "sqrt()", nullptr));
        lnButton->setText(QCoreApplication::translate("MainWindow", "ln()", nullptr));
        acosButton->setText(QCoreApplication::translate("MainWindow", "acos()", nullptr));
        graphButton->setText(QCoreApplication::translate("MainWindow", "GRAPH", nullptr));
        tanButton->setText(QCoreApplication::translate("MainWindow", "tan()", nullptr));
        sinButton->setText(QCoreApplication::translate("MainWindow", "sin()", nullptr));
        cosButton->setText(QCoreApplication::translate("MainWindow", "cos()", nullptr));
        asinButton->setText(QCoreApplication::translate("MainWindow", "asin()", nullptr));
        atanButton->setText(QCoreApplication::translate("MainWindow", "atan()", nullptr));
        fourButton->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        sevenButton->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        oneButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        zeroButton->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        eightButton->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        nineButton->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        fiveButton->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        sixButton->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        twoButton->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        threeButton->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        dotButton->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        xButton->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        rightPButton->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        leftPButton->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "NiBavs\302\251\357\270\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
