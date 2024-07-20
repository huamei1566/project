#ifndef REGISTERWIN_H
#define REGISTERWIN_H
#include <QWidget>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
namespace Ui {
class registerwin;
}

class registerwin : public QWidget
{
    Q_OBJECT

public:
    explicit registerwin(QWidget *parent = nullptr);
    ~registerwin();

    void timerEvent(QTimerEvent *e);

private slots:
    void on_remakeBt_clicked();

    void on_addfaceBt_clicked();

    void on_addBt_clicked();

    void on_openCameraBt_clicked();

    void on_photographBt_clicked();

private:
    Ui::registerwin *ui;
    int timerid;
    cv::VideoCapture cap;//摄像头
    cv::Mat image;
};

#endif // REGISTERWIN_H
