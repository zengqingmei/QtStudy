#pragma once
#include <QMainWindow>

class QAction;
class QLabel;

class MainWindow:public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
	QAction *openAction;
	QLabel *msgLabel;
	QAction *colorAction;

private slots:
	void open();
	void choseColor();
};
