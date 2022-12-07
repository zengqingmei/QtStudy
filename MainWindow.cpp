#include "MainWindow.h"
#include <QAction>
#include <QMenubar>
#include <QToolBar>
#include <QMessageBox>
#include <QLabel>
#include <QStatusBar>
#include <QFileDialog>
#include <QColorDIalog>

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent)
{
	openAction = new QAction(tr("&Open"), this);
	openAction->setShortcut(QKeySequence::Open);
	openAction->setStatusTip(tr("Open a file."));
	openAction->setIcon(QIcon(":/MainWindow/Open.ico"));
	connect(openAction, SIGNAL(triggered()), this, SLOT(open()));

	colorAction = new QAction(tr("&Color"),this);
	colorAction->setStatusTip(tr("Chose a color."));
	colorAction->setIcon(QIcon(":/MainWindow/Color.ico"));
	connect(colorAction,SIGNAL(triggered()),this,SLOT(choseColor()));

	msgLabel = new QLabel();
	msgLabel->setMinimumSize(msgLabel->sizeHint());
	msgLabel->setAlignment(Qt::AlignHCenter);
	statusBar()->addWidget(msgLabel);
	statusBar()->setStyleSheet(QString("QStatusBar::item{border:0px}"));

	QMenu *file = menuBar()->addMenu(tr("&File"));
	file->addAction(openAction);
	file->addAction(colorAction);

	QToolBar *toolBar = addToolBar(tr("&File"));
	toolBar->addAction(openAction);
	toolBar->addAction(colorAction);

	this->resize(800,500);
	this->setWindowIcon(QIcon(":/MainWindow/Window.ico"));
}

void MainWindow::open() {
	QFileDialog *fileDialog = new QFileDialog(this);
	fileDialog->setWindowTitle(tr("Open Image"));
	fileDialog->setDirectory(".");
	fileDialog->setNameFilter(tr("Image File(*.jpg *.png)"));
	if (fileDialog->exec() == QFileDialog::Accepted) {
		QString path = fileDialog->selectedFiles()[0];
		QMessageBox::information(NULL, tr("Path"), tr("You selected ")+path);
	}else {
		QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
	}
}

void MainWindow::choseColor() {
	QColor color = QColorDialog::getColor(Qt::white, nullptr, tr("Select Color"), QColorDialog::ColorDialogOption::ShowAlphaChannel);
	QString msg = QString("R:%1,G:%2,B:%3").arg(QString::number(color.red()), QString::number(color.green()), QString::number(color.blue()));
	QMessageBox::information(NULL, tr("Selected Color"), msg);
}

MainWindow::~MainWindow(){}
