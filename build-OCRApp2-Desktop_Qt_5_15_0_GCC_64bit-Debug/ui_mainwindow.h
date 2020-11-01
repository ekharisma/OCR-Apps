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
    QSlider *highThresholdSlider;
    QLabel *label_2;
    QSlider *lowThresholdSlider;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *ocrBtn;
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
        gaussianSlider->setGeometry(QRect(240, 510, 160, 16));
        gaussianSlider->setMinimum(3);
        gaussianSlider->setMaximum(9);
        gaussianSlider->setSingleStep(2);
        gaussianSlider->setPageStep(2);
        gaussianSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 530, 101, 18));
        highThresholdSlider = new QSlider(centralwidget);
        highThresholdSlider->setObjectName(QString::fromUtf8("highThresholdSlider"));
        highThresholdSlider->setGeometry(QRect(510, 510, 160, 16));
        highThresholdSlider->setMinimum(101);
        highThresholdSlider->setMaximum(255);
        highThresholdSlider->setSingleStep(5);
        highThresholdSlider->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(570, 530, 58, 18));
        lowThresholdSlider = new QSlider(centralwidget);
        lowThresholdSlider->setObjectName(QString::fromUtf8("lowThresholdSlider"));
        lowThresholdSlider->setGeometry(QRect(510, 480, 160, 16));
        lowThresholdSlider->setMaximum(100);
        lowThresholdSlider->setSingleStep(5);
        lowThresholdSlider->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(410, 480, 91, 18));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 510, 101, 18));
        ocrBtn = new QPushButton(centralwidget);
        ocrBtn->setObjectName(QString::fromUtf8("ocrBtn"));
        ocrBtn->setGeometry(QRect(700, 480, 80, 26));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "Canny", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Low Threshold", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "High Threshold", nullptr));
        ocrBtn->setText(QCoreApplication::translate("MainWindow", "OCR", nullptr));
        menuAplikasi_OCR->setTitle(QCoreApplication::translate("MainWindow", "Aplikasi OCR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
