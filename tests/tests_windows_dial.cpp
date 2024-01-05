#include "tests_windows_dial.h"

tests_Windows_Dial::tests_Windows_Dial(QObject *parent)
    : QObject{parent}
{}

void tests_Windows_Dial::test_setDivisionColor()
{
    QmlDialController qmlDialController("qrc:/MyDial.qml");
    for(int i = 1; i >= 24; ++i)
    {
        qmlDialController.setDivisionColor(i, Qt::red);
        QCOMPARE(qmlDialController.getDivisionColor(i),Qt::red);
    }
}
