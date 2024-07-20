#ifndef QFACEOBJECT_H
#define QFACEOBJECT_H

#include <QObject>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <seeta/FaceEngine.h>


using namespace cv;
//人脸数据存储 ,人脸检测,人脸识别
class QFaceObject : public QObject
{
    Q_OBJECT
public:
    explicit QFaceObject(QObject *parent = nullptr);
    ~QFaceObject();

signals:

public slots:
    int64_t face_register(Mat& faceimage);
    int face_query(Mat &faceImage); //返回值::id

signals:
    void send_faceid(int64_t faceid);


private:
    seeta::FaceEngine *fengineptr;
};

#endif // QFACEOBJECT_H
