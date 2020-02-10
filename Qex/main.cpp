#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    /*
    进行外观修饰
    */
    w.setWindowTitle("2019110010-陆富成");
    w.setWindowIcon(QIcon("image\\tit.ico"));
    //TODO ADD YOUR CODE FROM HERE

    //w.Refresh_();
    //END YOUR CODE NOW

    w.show();

    return a.exec();
}
