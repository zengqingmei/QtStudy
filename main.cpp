#include <QApplication>
#include <QTranslator>
#include "MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
	QTranslator *translator = new QTranslator();
	translator->load("translations/QtStudy_zh_Hans.qm");
	QTranslator *qtTranslator = new QTranslator();
	qtTranslator->load("translations/qt_zh_CN.qm");
	app.installTranslator(translator);
	app.installTranslator(qtTranslator);
	MainWindow *w = new MainWindow();
	w->show();
    return app.exec();
}
