#pragma once
#include <QLabel>

class QMouseEvent;

class EventLabel : public QLabel
{
public:
	EventLabel(QWidget *parent = nullptr);
	~EventLabel();

protected:
	void mouseMoveEvent(QMouseEvent *event) override;
	void mousePressEvent(QMouseEvent *event) override;
	void mouseReleaseEvent(QMouseEvent *event) override;
};
