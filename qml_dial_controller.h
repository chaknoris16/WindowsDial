#ifndef QMLDIALCONTROLLER_H
#define QMLDIALCONTROLLER_H

#include <QWidget>
#include <QQuickWidget>
#include <QColor>
#include <QQuickItem>

class QmlDialController : public QWidget
{
    Q_OBJECT
public:
    explicit QmlDialController(const QString &dial_qmlPath, QWidget *parent = nullptr);
    void setDivisionColor(int divisionIndex, const QColor& divisionColor);
    QColor getDivisionColor(int divisionIndex);
    void setTime(int mTime);
private:
    const QString& _dial_qmlPath;
    QQuickItem* winClockDialItem;
    QString colorToHex(const QColor& color);
};

#endif // QMLDIALCONTROLLER_H
