#pragma once
#include <QWidget>

class PaintedWidget : public QWidget
{
public:
	PaintedWidget(QWidget* parent = nullptr);
	~PaintedWidget();

protected:
	void paintEvent(QPaintEvent *event) override;
};
