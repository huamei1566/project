#include "face_recognition_system.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    face_recognition_system w;
    w.show();
    return a.exec();
}
