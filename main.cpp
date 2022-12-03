#include "MainWindow.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	QLabel *label = new QLabel("<h1>Hello World!!!<h1>");
	label->resize(500, 50);
	label->show();
    return a.exec();
}
