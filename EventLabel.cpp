#include "EventLabel.h"
#include <QMouseEvent>

EventLabel::EventLabel(QWidget *parent) :QLabel(parent) {
	this->setWindowTitle("MouseEvent");
	this->resize(300,200);
}

void EventLabel::mouseMoveEvent(QMouseEvent *event) {
	this->setText(QString("<center><h1>Move:(%1,%2)</h1></center>").arg(QString::number(event->x())).arg(QString::number(event->y())));
}

void EventLabel::mousePressEvent(QMouseEvent *event) {
	this->setText(QString("<center><h1>Press:(%1,%2)</h1></center>").arg(QString::number(event->x())).arg(QString::number(event->y())));
}

void EventLabel::mouseReleaseEvent(QMouseEvent *event) {
	QString msg;
	msg.sprintf("<center><h1>Press:(%1,%2)</h1></center>",event->x(),event->y());
	this->setText(msg);
}

EventLabel::~EventLabel(){}
