#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GLViewer.h"

class GLViewer : public QMainWindow
{
	Q_OBJECT

public:
	GLViewer(QWidget *parent = Q_NULLPTR);

private:
	Ui::GLViewerClass ui;
};
