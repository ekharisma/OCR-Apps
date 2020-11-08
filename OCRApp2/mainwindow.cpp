#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/text/ocr.hpp>
#include <opencv2/highgui.hpp>
#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
#include <QMessageBox>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_openBtn_clicked()
{
    filePath = QFileDialog::getOpenFileName(
                this,
                tr("Pilih Gambar"),
                "/home/kayugasan/Desktop",
                tr("Image Files (*.png *.jpg *.bmp)")
                );
    std::string filePathCV = filePath.toStdString();
    frame = cv::imread(filePathCV);
    QPixmap pixmap(filePath);
    ui->imgPlaceholder->setPixmap(pixmap.scaled(750, 450, Qt::KeepAspectRatio));


}

void MainWindow::on_grayscaleBtn_clicked()
{
    std::string filePathCV = filePath.toStdString();
    frame = cv::imread(filePathCV);
    cv::cvtColor(frame, frame, cv::COLOR_BGR2GRAY);
    QImage image = QImage((uchar*) frame.data, frame.cols, frame.rows, frame.step, QImage::Format_Grayscale8);
    QPixmap pixmap = QPixmap::fromImage(image);
    ui->imgPlaceholder->setPixmap(pixmap.scaled(750, 450, Qt::KeepAspectRatio));
}



void MainWindow::on_gaussianSlider_valueChanged(int value)
{
    cv::Mat gaussian_frame = frame;
    cv::GaussianBlur(gaussian_frame, gaussian_frame, cv::Size(value, value), 0, 0);
    QImage image = QImage((uchar*) gaussian_frame.data, gaussian_frame.cols, gaussian_frame.rows, gaussian_frame.step, QImage::Format_Grayscale8);
    QPixmap pixmap = QPixmap::fromImage(image);
    ui->imgPlaceholder->setPixmap(pixmap.scaled(750, 450, Qt::KeepAspectRatio));
    frame = gaussian_frame;
}

void MainWindow::on_upThresholdGS_sliderMoved(int position)
{
    upGrayscaleThrehValue = position;
    cv::MatIterator_<uchar>it, end;
    for(it = frame.begin<uchar>(), end = frame.end<uchar>(); it != end;++it) {
         if ((*it) < lowGrayscaleThrehValue || (*it) > upGrayscaleThrehValue) (*it) = 0;
    }
    QImage image = QImage((uchar*) frame.data, frame.cols, frame.rows, frame.step, QImage::Format_Grayscale8);
    QPixmap pixmap = QPixmap::fromImage(image);
    ui->imgPlaceholder->setPixmap(pixmap.scaled(750, 450, Qt::KeepAspectRatio));
}

void MainWindow::on_lowThresholdGs_sliderMoved(int position)
{
    lowGrayscaleThrehValue = position;
    cv::MatIterator_<uchar>it, end;
    for(it = frame.begin<uchar>(), end = frame.end<uchar>(); it != end;++it) {
        if (((*it) < lowGrayscaleThrehValue) || ((*it) > upGrayscaleThrehValue)) {
            (*it) = 0;
        }
    }
    QImage image = QImage((uchar*) frame.data, frame.cols, frame.rows, frame.step, QImage::Format_Grayscale8);
    QPixmap pixmap = QPixmap::fromImage(image);
    ui->imgPlaceholder->setPixmap(pixmap.scaled(750, 450, Qt::KeepAspectRatio));
}

void MainWindow::on_ocrBtn_clicked()
{
    tesseract::TessBaseAPI *ocr = new tesseract::TessBaseAPI;
    ocr->Init(NULL, "eng", tesseract::OEM_DEFAULT);
    ocr->SetPageSegMode(tesseract::PSM_AUTO);
    ocr->SetImage(frame.data, frame.cols, frame.rows, 1, frame.step);
    std::string outText = std::string(ocr->GetUTF8Text());
    QString result = QString::fromStdString(outText);

    QMessageBox mgBox;
    mgBox.setText(result);
    mgBox.exec();

//    QString outTextDir = QFileDialog::getSaveFileName(
//                this,
//                tr("Simpan Dimana ?"),
//                tr("txt file(*.txt);;All Files (*)")
//                );

//    if (outTextDir.isEmpty()) return ;
//    else {
//        QFile file(outTextDir);
//        if (!file.open(QIODevice::WriteOnly)) {
//            QMessageBox::information(this, tr("Tidak bisa dibuka"), file.errorString());
//            return;
//        }
//        QDataStream out(&file);
//        out.setVersion(QDataStream::Qt_4_5);
//        out << outText;
//    }
}




