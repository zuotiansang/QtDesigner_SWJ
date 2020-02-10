#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtSerialPort/qserialport.h>
#include <QtSerialPort/qserialportinfo.h>

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>

#include <qchart.h>
#include <qchartview.h>
#include <qlineseries.h>

#include <QtCharts>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    void Init_();
    void Creat_view();
    void Refresh_();
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QSerialPort* serial;
    qreal value_get;

    //QChart USE
    QChart* chart;
    QChartView* view_;
    QLineSeries* seris;

    //TO ADD LATER
    QCategoryAxis *axisX;

    //variable value
    //TODO
    QGridLayout* baseLayout;

    //TODO
    qreal x1, y1;
    qreal x2, y2;
    qreal x3, y3;
    qreal x4, y4;
    qreal x5, y5;
private slots:
    void Open_();
    void ReadData_();
};

#endif // MAINWINDOW_H
