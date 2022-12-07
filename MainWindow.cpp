#include "MainWindow.h"
#include <QAction>
#include <QMenubar>
#include <QToolBar>

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent)
{
	openAction = new QAction(tr("&Open"), this);
	openAction->setShortcut(QKeySequence::Open);
	openAction->setStatusTip(tr("Open a file."));
	openAction->setIcon(QIcon(":/MainWindow/Open.ico"));

	QMenu *file = menuBar()->addMenu(tr("&File"));
	file->addAction(openAction);

	QToolBar *toolBar = addToolBar(tr("&File"));
	toolBar->addAction(openAction);

	this->resize(400,300);
	this->setWindowIcon(QIcon(":/MainWindow/Window.ico"));
}

MainWindow::~MainWindow(){}
