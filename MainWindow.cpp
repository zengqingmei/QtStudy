#include "MainWindow.h"
#include <QAction>
#include <QMenubar>
#include <QToolBar>

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent)
{
	openAction = new QAction(tr("&Open"), this);
	openAction->setShortcut(QKeySequence::Open);
	openAction->setStatusTip(tr("Open a file."));

	QMenu *file = menuBar()->addMenu(tr("&File"));
	file->addAction(openAction);

	QToolBar *toolBar = addToolBar(tr("&File"));
	toolBar->addAction(openAction);

	resize(400,300);
}

MainWindow::~MainWindow(){}
