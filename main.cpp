#include "MainWindow.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel *label = new QLabel("<h1><font color='green'>Hello World!!!</font><h1>");
    label->resize(300, 50);
    label->show();
    return app.exec();
}
