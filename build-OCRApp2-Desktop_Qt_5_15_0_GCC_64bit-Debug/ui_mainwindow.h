/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *closeBtn;
    QPushButton *openBtn;
    QPushButton *grayscaleBtn;
    QLabel *imgPlaceholder;
    QSlider *gaussianSlider;
    QLabel *label;
    QPushButton *ocrBtn;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QSlider *lowThresholdGs;
    QSlider *upThresholdGS;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menuAplikasi_OCR;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        closeBtn = new QPushButton(centralwidget);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(700, 520, 80, 26));
        openBtn = new QPushButton(centralwidget);
        openBtn->setObjectName(QString::fromUtf8("openBtn"));
        openBtn->setGeometry(QRect(10, 520, 111, 26));
        grayscaleBtn = new QPushButton(centralwidget);
        grayscaleBtn->setObjectName(QString::fromUtf8("grayscaleBtn"));
        grayscaleBtn->setGeometry(QRect(140, 520, 80, 26));
        imgPlaceholder = new QLabel(centralwidget);
        imgPlaceholder->setObjectName(QString::fromUtf8("imgPlaceholder"));
        imgPlaceholder->setGeometry(QRect(50, 30, 731, 441));
        gaussianSlider = new QSlider(centralwidget);
        gaussianSlider->setObjectName(QString::fromUtf8("gaussianSlider"));
        gaussianSlider->setGeometry(QRect(260, 510, 160, 16));
        gaussianSlider->setMinimum(3);
        gaussianSlider->setMaximum(9);
        gaussianSlider->setSingleStep(2);
        gaussianSlider->setPageStep(2);
        gaussianSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 530, 101, 18));
        ocrBtn = new QPushButton(centralwidget);
        ocrBtn->setObjectName(QString::fromUtf8("ocrBtn"));
        ocrBtn->setGeometry(QRect(700, 480, 80, 26));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(430, 480, 81, 18));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(210, 560, 256, 192));
        lowThresholdGs = new QSlider(centralwidget);
        lowThresholdGs->setObjectName(QString::fromUtf8("lowThresholdGs"));
        lowThresholdGs->setGeometry(QRect(510, 510, 160, 16));
        lowThresholdGs->setMaximum(125);
        lowThresholdGs->setOrientation(Qt::Horizontal);
        upThresholdGS = new QSlider(centralwidget);
        upThresholdGS->setObjectName(QString::fromUtf8("upThresholdGS"));
        upThresholdGS->setGeometry(QRect(510, 480, 160, 16));
        upThresholdGS->setMinimum(126);
        upThresholdGS->setMaximum(255);
        upThresholdGS->setSliderPosition(255);
        upThresholdGS->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(430, 510, 81, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuAplikasi_OCR = new QMenu(menubar);
        menuAplikasi_OCR->setObjectName(QString::fromUtf8("menuAplikasi_OCR"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuAplikasi_OCR->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(closeBtn, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(upThresholdGS, SIGNAL(sliderMoved(int)), label_2, SLOT(setNum(int)));
        QObject::connect(lowThresholdGs, SIGNAL(sliderMoved(int)), label_3, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        closeBtn->setText(QCoreApplication::translate("MainWindow", "Tutup", nullptr));
        openBtn->setText(QCoreApplication::translate("MainWindow", "Buka Gambar", nullptr));
        grayscaleBtn->setText(QCoreApplication::translate("MainWindow", "Grayscale", nullptr));
        imgPlaceholder->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Gaussian Slider", nullptr));
        ocrBtn->setText(QCoreApplication::translate("MainWindow", "OCR", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Upper Thres", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Lower Thres", nullptr));
        menuAplikasi_OCR->setTitle(QCoreApplication::translate("MainWindow", "Aplikasi OCR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
