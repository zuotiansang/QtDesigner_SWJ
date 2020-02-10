#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //After the ui.setupUi(this)

    //position alternative

    //use the serialport must add 'QT       += serialport' in the pro
    Init_();

    if (QObject::connect(ui->Open, SIGNAL(clicked()), this, SLOT(Open_())))
    {
        ui->infor_->append("Success\\.");
    }
    else
    {
        ui->infor_->append("Defeat\\.");
    }

    //add qtchart have some significant means
    x1 = 1.0;
    y1 = 100;
    x2 = 2.0;
    y2 = 21.6;
    x3 = 3.0;
    y3 = 25.9;
    x4 = 4.0;
    y4 = 22.1;
    x5 = 5.0;
    y5 = 0;

    //add chart list

    //TODO RI REM
    //seris = new QLineSeries();
    Creat_view();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::Init_()
{
    //add com if necessary or not
    //yes but no extern values
    const auto infos = QSerialPortInfo::availablePorts();

    if (!infos.isEmpty())
    {
        ui->com->clear();
    }
    for (const QSerialPortInfo& info : infos)
    {
        QSerialPort serial;
        serial.setPort(info);
        if (serial.open(QIODevice::ReadWrite))
        {

            ui->com->addItem(info.portName());
            //qDebug() << info.portName();
            ui->infor_->append(info.portName());
            ui->infor_->append(info.description());
            ui->infor_->append(info.systemLocation());

            serial.close();
        }
    }
}
void MainWindow::Open_()
{
    //Guest the app
    if (ui->Open->text() == tr("打开"))
    {
        //this have some or many problems
        serial = new QSerialPort;

        serial->setPortName(ui->com->currentText());


        if (serial->open(QIODevice::ReadWrite))
        {
            serial->setDataBits(QSerialPort::Data8);
            serial->setStopBits(QSerialPort::OneStop);
            serial->setParity(QSerialPort::NoParity);
            serial->setBaudRate(QSerialPort::Baud115200);

            //do some necessary oprations

            ui->com->setEnabled(false);
            ui->shuju->setEnabled(false);
            ui->tingzhi->setEnabled(false);
            ui->jiaoyan->setEnabled(false);
            ui->baud->setEnabled(false);

            //do one important opra

            ui->Open->setText("关闭");

            //READY RECEIVE
            //seen have problems here

            //try to test the problems is
            //USE INFOR TO SOLVE THE PROB
            if (QObject::connect(serial, SIGNAL(readyRead()), this, SLOT(ReadData_())))
            {
                ui->infor_->append("Connect\\.");
            }
            else
            {
                ui->infor_->append("No Connect to COM\\.");
            }

        }
    }
    else
    {
        //copy former
        ui->com->setEnabled(true);
        ui->shuju->setEnabled(true);
        ui->tingzhi->setEnabled(true);
        ui->jiaoyan->setEnabled(true);
        ui->baud->setEnabled(true);

        //also same with "Open"
        ui->Open->setText("打开");

        //close the port
        serial->clear();
        serial->close();
        serial->deleteLater();

        //QObject::disconnect(serial, SIGNAL(QSerialPort::readyRead), this, SLOT(ReadData_()));
    }
}

void MainWindow::ReadData_()
{
    //static int reNum = 0;
    //flag = ~flag;

    QByteArray buf;
    buf = serial->readAll();

    if (!buf.isEmpty())
    {
        //reNum += buf.size();
        //QString myStrTemp = QString::fromLocal8Bit(buf);
        //QString str = ui.infor_->toPlainText();
        //str += myStrTemp;
        //ui.infor_->clear();
        ui->infor_->append(buf);
    }



    //TO Verify but not use formally
    //ui.infor_->append(tr("Yes, already into the connect function."));

    //not only read but also display use LCD

    QString Temp_era;
    Temp_era[0] = buf[0];
    Temp_era[1] = buf[1];
    Temp_era[2] = buf[2];
    Temp_era[3] = buf[3];

    //this to test the MODE
    //ui.Temp->setDecMode();
    ui->Temp->display(Temp_era);


    //also
    QString Humi_man;
    Humi_man[0] = buf[4];
    Humi_man[1] = buf[5];
    Humi_man[2] = buf[6];
    Humi_man[3] = buf[7];

    ui->Humi->display(Humi_man);

    ui->infor_->append("Already finish the display\\\\.");

    //TODO Refresh DATA
    value_get = 0.0;
    //QPointF _new_;
    value_get = (buf.at(0)-'0')*10+(buf.at(1)-'0')*1+(buf.at(3)-'0')*0.1;
    //_new_.setX(5.0);
    //_new_.setY(total);
    Refresh_();
    //Refresh_(total);
    //

    buf.clear();
}

void MainWindow::Creat_view()
{
    QChart* chart_ = new QChart();
    QChartView* view_ = new QChartView();
    //QLineSeries* seris = new QLineSeries();
    seris = new QLineSeries();

    //add line
    seris->setColor(QColor(255, 0, 255));
    seris->setName("温度曲线");


    seris->append(x1, y1);
    seris->append(x2, y2);
    seris->append(x3, y3);
    seris->append(x4, y4);
    seris->append(x5, y5);

    //1.5 step later add
    //axisX=new QCategoryAxis;

    //axisX->append("1",1);
    //axisX->append("2",2);
    //axisX->append("3",3);
    //axisX->append("4",4);
    //axisX->append("5",5);
    //ADD CODE NOW
    //axisX->setLabelsPosition(QCategoryAxis::AxisLabelsPositionOnValue);

    //chart_->setAxisY(axisY);
    //2 step

    chart_->addSeries(seris);

    //chart_->setAxisX(axisX,seris);

    //modify the display pro
    chart_->createDefaultAxes();



    //chart_->setTitle("温度曲线(5-D)");
    //chart_->setTitleBrush(QBrush(QColor(255, 170, 255)));
    chart_->setBackgroundBrush(QColor(0, 0, 0));

    //3 step
    view_->setRenderHint(QPainter::Antialiasing);
    view_->setChart(chart_);
    //TODO TEST
    QGridLayout* baseLayout = new QGridLayout();
    baseLayout->addWidget(view_,0,0);
    ui->graphics_view->setLayout(baseLayout);

    ui->infor_->append("Correct the tab view\\\\.");
}

//ref the pro met
void MainWindow::Refresh_()
{
    //to be re
    //seris->remove(1);
    y1 = y2;
    y2 = y3;
    y3 = y4;
    y4 = y5;
    y5 = value_get;
    //Creat_view();

    //TO DO AS THIS IS RIGHT
    //TAKE ME MUCH TIME
    seris->clear();


    seris->append(x1,y1);
    seris->append(x2,y2);
    seris->append(x3,y3);
    seris->append(x4,y4);
    seris->append(x5,y5);


}
