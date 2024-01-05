#include "windowsdial.h"
#include "tests/tests_windows_dial.h"
#include <QApplication>
#include <QTest>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTest::qExec(new tests_Windows_Dial(), argc, argv);
    WindowsDial w("qrc:/MyDial.qml");
    w.startCountdown(3);
    w.show();
    return a.exec();
}
