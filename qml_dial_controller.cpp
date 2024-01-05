#include "qml_dial_controller.h"

QmlDialController::QmlDialController(const QString &dial_qmlPath, QWidget *parent)
    : QWidget{parent},
    _dial_qmlPath{dial_qmlPath}
{
    QQuickWidget *qmlDial = new QQuickWidget(QUrl(this->_dial_qmlPath), this);
    qmlDial->setResizeMode(QQuickWidget::SizeViewToRootObject);
    qmlDial->setMaximumSize(270, 270);
    this->winClockDialItem = qmlDial->rootObject();
    this->winClockDialItem->setProperty("myDialController", QVariant::fromValue(this));
}

void QmlDialController::setDivisionColor(int divisionIndex, const QColor &divisionColor)
{
    QString divisionName = "rectangle" + QString::number(divisionIndex);
    QObject* childObject = this->winClockDialItem->findChild<QObject*>(divisionName);
    if (childObject) {
        childObject->setProperty("color", this->colorToHex(divisionColor));
    } else {
        qDebug() << "Failed to find child object " + divisionName;
    }
}

QColor QmlDialController::getDivisionColor(int divisionIndex)
{
    QString divisionName = "rectangle" + QString::number(divisionIndex);
    QObject* childObject = this->winClockDialItem->findChild<QObject*>(divisionName);
    qDebug() << childObject->property("color").toString();
    return QColor(childObject->property("color").toString());
}

QString QmlDialController::colorToHex(const QColor &color)
{
    if(color.isValid())
    {
        QString hexColor = QString("#%1%2%3")
                               .arg(color.red(), 2, 16, QChar('0'))
                               .arg(color.green(), 2, 16, QChar('0'))
                               .arg(color.blue(), 2, 16, QChar('0'));
        return hexColor;
    }
    return "#000000";
}


void QmlDialController::setTime(int mTime)
{
    QObject* textFieldObject = this->winClockDialItem->findChild<QObject*>("timeText");
    textFieldObject->setProperty("text", QString::number(mTime) + " min");
}
