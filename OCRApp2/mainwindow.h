#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

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
    void on_openBtn_clicked();

    void on_grayscaleBtn_clicked();

    void on_gaussianSlider_valueChanged(int value);

    void on_ocrBtn_clicked();

    void on_upThresholdGS_sliderMoved(int position);

    void on_lowThresholdGs_sliderMoved(int position);

private:
    QString filePath;
    cv::Mat frame;
    int lowGrayscaleThrehValue = 0;
    int upGrayscaleThrehValue = 255;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
