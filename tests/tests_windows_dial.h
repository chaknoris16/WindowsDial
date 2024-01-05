#ifndef TESTS_WINDOWS_DIAL_H
#define TESTS_WINDOWS_DIAL_H
#include "../windowsdial.h"
#include "../qml_dial_controller.h"

#include <QObject>
#include <QTest>
class tests_Windows_Dial : public QObject
{
    Q_OBJECT
public:
    explicit tests_Windows_Dial(QObject *parent = nullptr);
private slots:
    void test_setDivisionColor();
};

#endif // TESTS_WINDOWS_DIAL_H
