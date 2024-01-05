#ifndef WINDOWSDIAL_H
#define WINDOWSDIAL_H

#include <QWidget>
#include <QQuickWidget>
#include <QColor>
#include <QQuickItem>
#include <QTimer>
#include "qml_dial_controller.h"
class WindowsDial : public QWidget
{
    Q_OBJECT

public:
    WindowsDial(const QString& dial_qmlPath = nullptr, QWidget *parent = nullptr);
    ~WindowsDial();
    void setDivisionColor(int divisionIndex, const QColor& divisionColor);
    void startCountdown(int minutes);
    void setTime(int mTime);
    QColor getDivisionColor(int divisionIndex);
public slots:
    void timeDecrement();
private:
    const QString& _dial_qmlPath;
    QQuickItem* winClockDialItem;
    QString colorToHex(const QColor& color);
    QTimer *timer = new QTimer(this);
    QTimer *divTimer = new QTimer(this);
    int time = 0;
    int divNumber = 24;
    int currentDivNum = 0;
    double divPrice;
    double determinateDivPrice(int minutes);
    QmlDialController* qmlDialController;
signals:
    void timerTimeout();
};
#endif // WINDOWSDIAL_H
