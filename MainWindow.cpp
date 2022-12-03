#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent)
{
	ui.setupUi(this);
	this->resize(640, 480);
}

MainWindow::~MainWindow(){}
