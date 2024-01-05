#include "windowsdial.h"

WindowsDial::WindowsDial(const QString &dial_qmlPath, QWidget *parent)
    : QWidget(parent),
    _dial_qmlPath{dial_qmlPath}
{
    this->qmlDialController = new QmlDialController("qrc:/MyDial.qml", this);
    this->setMinimumSize(270, 270);
    connect(this->timer, &QTimer::timeout, this, &WindowsDial::timeDecrement);
    connect(this->divTimer, &QTimer::timeout, this, [this](){
        if(this->divNumber > currentDivNum)
        {
            qmlDialController->setDivisionColor(currentDivNum, QColor("#2e323d"));
            ++currentDivNum;
            qDebug()<<"minus div " + QString::number(currentDivNum);
            this->divTimer->start(divPrice * 60000);
        } else
        {
            this->divTimer->stop();
            this->close();
        }
    });
}
WindowsDial::~WindowsDial() {}

void WindowsDial::startCountdown(int minutes)
{
    if(minutes > 0)
    {
        this->time = minutes;

        this->divPrice = this->determinateDivPrice(minutes);
        this->divTimer->start(divPrice * 60000);
        qmlDialController->setTime(minutes);
        timeDecrement();
    }
}

void WindowsDial::timeDecrement()
{
    if(time > 0)
    {
        this->timer->start(60000);
        --time;
        qmlDialController->setTime(this->time + 1);
        qDebug()<<"minus minute";
    }else emit this->timerTimeout();
}


double WindowsDial::determinateDivPrice(int minutes)
{
    if(minutes > 0)
    {
        return static_cast<double>(minutes) / this->divNumber;
    }
    return 0.0;
}
