#include "qfaceobject.h"

QFaceObject::QFaceObject(QObject *parent)
    : QObject{parent}
{
 //初始化引擎
    seeta::ModelSetting FDmode("D:/door/opcv/seet2_install/bin/model/fd_2_00.dat",seeta::ModelSetting::GPU,0);
    seeta::ModelSetting PDmode("D:/door/opcv/seet2_install/bin/model/pd_2_00_pts5.dat",seeta::ModelSetting::GPU,0);
    seeta::ModelSetting FRDmode("D:/door/opcv/seet2_install/bin/model/fr_2_10.dat",seeta::ModelSetting::GPU,0);
    this->fengineptr = new seeta::FaceEngine(FDmode,PDmode,FRDmode);

    //导入已有的人脸数据库
    this->fengineptr->Load("./face.db");
}

QFaceObject::~QFaceObject()
{
    delete fengineptr;

}

int64_t QFaceObject::face_register(Mat &faceimage)
{
    //把opencv的Mat数据转为seetaface的数据
    SeetaImageData simage;
    simage.data = faceimage.data;
    simage.width = faceimage.cols;
    simage.height = faceimage.rows;
    simage.channels = faceimage.channels();

   int64_t faceid =  this->fengineptr->Register(simage);//注册返回一个人脸id
    if(faceid>=0)
   {
       fengineptr->Save("./face.db");

   }
    return faceid;

}

//查询
int QFaceObject::face_query(Mat &faceImage)
{
    SeetaImageData simage;
    simage.data = faceImage.data;
    simage.width = faceImage.cols;
    simage.height = faceImage.rows;
    simage.channels = faceImage.channels();
    float similarity = 0;
    int64_t faceid = fengineptr->Query(simage,&similarity);//运行时间比较长
    if(similarity > 0.65){
        emit send_faceid(faceid);


    }
    else
    {
        emit send_faceid(-1);
    }

    return faceid;

}
