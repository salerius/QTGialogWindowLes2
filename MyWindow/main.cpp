#include <QApplication>
#include "MyWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    MyWindow *window = new MyWindow();

    window->show();

//Hello

    return a.exec();
}
