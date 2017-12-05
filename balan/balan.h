#pragma once

#include <QtWidgets/QWidget>
#include "ui_balan.h"
#include <qdebug.h>

class balan : public QWidget
{
	Q_OBJECT

public:
	balan(QWidget *parent = Q_NULLPTR);

private:
	Ui::balanClass ui;
};
