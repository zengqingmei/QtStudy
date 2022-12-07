#pragma once
#include <QMainWindow>

class QAction;

class MainWindow:public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
	QAction *openAction;

private slots:
	void open();
};
