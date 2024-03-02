/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *outputField;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *xButton;
    QPushButton *twoButton;
    QPushButton *fourButton;
    QPushButton *dotButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *sevenButton;
    QPushButton *eightButton;
    QPushButton *zeroButton;
    QPushButton *threeButton;
    QPushButton *nineButton;
    QPushButton *oneButton;
    QPushButton *clearButton;
    QPushButton *leftPButton;
    QPushButton *rightPButton;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *xEdit;
    QPushButton *equalButton;
    QPushButton *minusButton;
    QPushButton *plusButton;
    QPushButton *modButton;
    QPushButton *powButton;
    QPushButton *sqrtButton;
    QPushButton *lnButton;
    QPushButton *mulButton;
    QPushButton *divButton;
    QPushButton *logButton;
    QLineEdit *inputField;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *asinButton;
    QPushButton *sinButton;
    QPushButton *atanButton;
    QPushButton *acosButton;
    QPushButton *tanButton;
    QPushButton *cosButton;
    QPushButton *graphButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(701, 583);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        outputField = new QLabel(centralwidget);
        outputField->setObjectName(QString::fromUtf8("outputField"));
        outputField->setEnabled(true);
        outputField->setGeometry(QRect(10, 180, 471, 41));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(outputField->sizePolicy().hasHeightForWidth());
        outputField->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(30);
        outputField->setFont(font);
        outputField->setLayoutDirection(Qt::LeftToRight);
        outputField->setAutoFillBackground(true);
        outputField->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 250, 254, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        xButton = new QPushButton(gridLayoutWidget);
        xButton->setObjectName(QString::fromUtf8("xButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(xButton->sizePolicy().hasHeightForWidth());
        xButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(xButton, 4, 2, 1, 1);

        twoButton = new QPushButton(gridLayoutWidget);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        sizePolicy1.setHeightForWidth(twoButton->sizePolicy().hasHeightForWidth());
        twoButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(twoButton, 3, 1, 1, 1);

        fourButton = new QPushButton(gridLayoutWidget);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        sizePolicy1.setHeightForWidth(fourButton->sizePolicy().hasHeightForWidth());
        fourButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(fourButton, 2, 0, 1, 1);

        dotButton = new QPushButton(gridLayoutWidget);
        dotButton->setObjectName(QString::fromUtf8("dotButton"));
        sizePolicy1.setHeightForWidth(dotButton->sizePolicy().hasHeightForWidth());
        dotButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(dotButton, 4, 1, 1, 1);

        fiveButton = new QPushButton(gridLayoutWidget);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        sizePolicy1.setHeightForWidth(fiveButton->sizePolicy().hasHeightForWidth());
        fiveButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(fiveButton, 2, 1, 1, 1);

        sixButton = new QPushButton(gridLayoutWidget);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sizePolicy1.setHeightForWidth(sixButton->sizePolicy().hasHeightForWidth());
        sixButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(sixButton, 2, 2, 1, 1);

        sevenButton = new QPushButton(gridLayoutWidget);
        sevenButton->setObjectName(QString::fromUtf8("sevenButton"));
        sizePolicy1.setHeightForWidth(sevenButton->sizePolicy().hasHeightForWidth());
        sevenButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(sevenButton, 1, 0, 1, 1);

        eightButton = new QPushButton(gridLayoutWidget);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        sizePolicy1.setHeightForWidth(eightButton->sizePolicy().hasHeightForWidth());
        eightButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(eightButton, 1, 1, 1, 1);

        zeroButton = new QPushButton(gridLayoutWidget);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        sizePolicy1.setHeightForWidth(zeroButton->sizePolicy().hasHeightForWidth());
        zeroButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(zeroButton, 4, 0, 1, 1);

        threeButton = new QPushButton(gridLayoutWidget);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        sizePolicy1.setHeightForWidth(threeButton->sizePolicy().hasHeightForWidth());
        threeButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(threeButton, 3, 2, 1, 1);

        nineButton = new QPushButton(gridLayoutWidget);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        sizePolicy1.setHeightForWidth(nineButton->sizePolicy().hasHeightForWidth());
        nineButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(nineButton, 1, 2, 1, 1);

        oneButton = new QPushButton(gridLayoutWidget);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        sizePolicy1.setHeightForWidth(oneButton->sizePolicy().hasHeightForWidth());
        oneButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(oneButton, 3, 0, 1, 1);

        clearButton = new QPushButton(gridLayoutWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(clearButton, 0, 0, 1, 1);

        leftPButton = new QPushButton(gridLayoutWidget);
        leftPButton->setObjectName(QString::fromUtf8("leftPButton"));
        sizePolicy1.setHeightForWidth(leftPButton->sizePolicy().hasHeightForWidth());
        leftPButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(leftPButton, 0, 1, 1, 1);

        rightPButton = new QPushButton(gridLayoutWidget);
        rightPButton->setObjectName(QString::fromUtf8("rightPButton"));
        sizePolicy1.setHeightForWidth(rightPButton->sizePolicy().hasHeightForWidth());
        rightPButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(rightPButton, 0, 2, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(280, 250, 211, 261));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        xEdit = new QLineEdit(gridLayoutWidget_2);
        xEdit->setObjectName(QString::fromUtf8("xEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(xEdit->sizePolicy().hasHeightForWidth());
        xEdit->setSizePolicy(sizePolicy2);
        xEdit->setFocusPolicy(Qt::StrongFocus);
        xEdit->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(xEdit, 5, 0, 1, 1);

        equalButton = new QPushButton(gridLayoutWidget_2);
        equalButton->setObjectName(QString::fromUtf8("equalButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(equalButton->sizePolicy().hasHeightForWidth());
        equalButton->setSizePolicy(sizePolicy3);
        equalButton->setCursor(QCursor(Qt::PointingHandCursor));
        equalButton->setFocusPolicy(Qt::NoFocus);
        equalButton->setAutoDefault(true);

        gridLayout_2->addWidget(equalButton, 4, 1, 2, 1);

        minusButton = new QPushButton(gridLayoutWidget_2);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        sizePolicy1.setHeightForWidth(minusButton->sizePolicy().hasHeightForWidth());
        minusButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(minusButton, 4, 0, 1, 1);

        plusButton = new QPushButton(gridLayoutWidget_2);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));
        sizePolicy1.setHeightForWidth(plusButton->sizePolicy().hasHeightForWidth());
        plusButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(plusButton, 3, 0, 1, 1);

        modButton = new QPushButton(gridLayoutWidget_2);
        modButton->setObjectName(QString::fromUtf8("modButton"));
        sizePolicy1.setHeightForWidth(modButton->sizePolicy().hasHeightForWidth());
        modButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(modButton, 2, 2, 1, 1);

        powButton = new QPushButton(gridLayoutWidget_2);
        powButton->setObjectName(QString::fromUtf8("powButton"));
        sizePolicy1.setHeightForWidth(powButton->sizePolicy().hasHeightForWidth());
        powButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(powButton, 3, 1, 1, 1);

        sqrtButton = new QPushButton(gridLayoutWidget_2);
        sqrtButton->setObjectName(QString::fromUtf8("sqrtButton"));
        sizePolicy1.setHeightForWidth(sqrtButton->sizePolicy().hasHeightForWidth());
        sqrtButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(sqrtButton, 3, 2, 1, 1);

        lnButton = new QPushButton(gridLayoutWidget_2);
        lnButton->setObjectName(QString::fromUtf8("lnButton"));
        sizePolicy1.setHeightForWidth(lnButton->sizePolicy().hasHeightForWidth());
        lnButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lnButton, 4, 2, 1, 1);

        mulButton = new QPushButton(gridLayoutWidget_2);
        mulButton->setObjectName(QString::fromUtf8("mulButton"));
        sizePolicy1.setHeightForWidth(mulButton->sizePolicy().hasHeightForWidth());
        mulButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mulButton, 2, 0, 1, 1);

        divButton = new QPushButton(gridLayoutWidget_2);
        divButton->setObjectName(QString::fromUtf8("divButton"));
        sizePolicy1.setHeightForWidth(divButton->sizePolicy().hasHeightForWidth());
        divButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(divButton, 2, 1, 1, 1);

        logButton = new QPushButton(gridLayoutWidget_2);
        logButton->setObjectName(QString::fromUtf8("logButton"));
        sizePolicy1.setHeightForWidth(logButton->sizePolicy().hasHeightForWidth());
        logButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(logButton, 5, 2, 1, 1);

        inputField = new QLineEdit(gridLayoutWidget_2);
        inputField->setObjectName(QString::fromUtf8("inputField"));
        sizePolicy1.setHeightForWidth(inputField->sizePolicy().hasHeightForWidth());
        inputField->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(18);
        inputField->setFont(font1);

        gridLayout_2->addWidget(inputField, 1, 0, 1, 3);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(530, 250, 141, 261));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        asinButton = new QPushButton(gridLayoutWidget_3);
        asinButton->setObjectName(QString::fromUtf8("asinButton"));
        sizePolicy1.setHeightForWidth(asinButton->sizePolicy().hasHeightForWidth());
        asinButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(asinButton, 2, 1, 1, 1);

        sinButton = new QPushButton(gridLayoutWidget_3);
        sinButton->setObjectName(QString::fromUtf8("sinButton"));
        sizePolicy1.setHeightForWidth(sinButton->sizePolicy().hasHeightForWidth());
        sinButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(sinButton, 2, 0, 1, 1);

        atanButton = new QPushButton(gridLayoutWidget_3);
        atanButton->setObjectName(QString::fromUtf8("atanButton"));
        sizePolicy1.setHeightForWidth(atanButton->sizePolicy().hasHeightForWidth());
        atanButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(atanButton, 3, 1, 1, 1);

        acosButton = new QPushButton(gridLayoutWidget_3);
        acosButton->setObjectName(QString::fromUtf8("acosButton"));
        sizePolicy1.setHeightForWidth(acosButton->sizePolicy().hasHeightForWidth());
        acosButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(acosButton, 1, 1, 1, 1);

        tanButton = new QPushButton(gridLayoutWidget_3);
        tanButton->setObjectName(QString::fromUtf8("tanButton"));
        sizePolicy1.setHeightForWidth(tanButton->sizePolicy().hasHeightForWidth());
        tanButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(tanButton, 3, 0, 1, 1);

        cosButton = new QPushButton(gridLayoutWidget_3);
        cosButton->setObjectName(QString::fromUtf8("cosButton"));
        sizePolicy1.setHeightForWidth(cosButton->sizePolicy().hasHeightForWidth());
        cosButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(cosButton, 1, 0, 1, 1);

        graphButton = new QPushButton(gridLayoutWidget_3);
        graphButton->setObjectName(QString::fromUtf8("graphButton"));
        sizePolicy1.setHeightForWidth(graphButton->sizePolicy().hasHeightForWidth());
        graphButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(graphButton, 0, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 701, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Smart_Cal", nullptr));
        outputField->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        xButton->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        twoButton->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        fourButton->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        dotButton->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        fiveButton->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        sixButton->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        sevenButton->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        eightButton->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        zeroButton->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        threeButton->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        nineButton->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        oneButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
        leftPButton->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        rightPButton->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
#if QT_CONFIG(tooltip)
        xEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        xEdit->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        xEdit->setText(QString());
        equalButton->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        minusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        plusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        modButton->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        powButton->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        sqrtButton->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        lnButton->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        mulButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        divButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        logButton->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        asinButton->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        sinButton->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        atanButton->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        acosButton->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        tanButton->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        cosButton->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        graphButton->setText(QCoreApplication::translate("MainWindow", "GRAPH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
