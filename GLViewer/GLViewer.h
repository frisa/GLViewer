#pragma once

#include <QtWidgets/QMainWindow>
#include <QFileDialog>
#include "ui_GLViewer.h"
#include <vector>
#include "CPosition.h"
#include "CPointsModel.h"

class GLViewer : public QMainWindow
{
	Q_OBJECT

public:
	GLViewer(QWidget *parent = Q_NULLPTR);

protected:
	Ui::GLViewerClass ui;
	CPointsModel *m_model;

private slots:
	void close();
	void open();
	void load();

	bool loadImuLine(const std::string & strLine, CPosition & line);

};
