#include "PaintedWidget.h"
#include <QPainter>

PaintedWidget::PaintedWidget(QWidget* parent) :QWidget(parent) {
	resize(800,600);
	setWindowTitle(tr("Paint"));
}

void PaintedWidget::paintEvent(QPaintEvent *event) {
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing, true);
	QLinearGradient linearGradient(60,50,200,200);
	linearGradient.setColorAt(0.2,Qt::white);
	linearGradient.setColorAt(0.6, Qt::green);
	linearGradient.setColorAt(1.0, Qt::black);
	painter.setPen(QPen(QBrush(linearGradient),5));
	painter.drawLine(50,50,200,200);
}

PaintedWidget::~PaintedWidget(){}
