#include <QApplication>
#include <QTranslator>
#include "MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
	QTranslator *translator = new QTranslator();
	translator->load("Resources/QtStudy_zh_Hans.qm");
	app.installTranslator(translator);
	MainWindow *w = new MainWindow();
	w->show();
    return app.exec();
}
