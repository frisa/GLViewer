#include "GLViewer.h"
#include <QStringListModel>
#include <fstream>
#include <CPointsModel.h>

GLViewer::GLViewer(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.actionClose, SIGNAL(triggered()), this, SLOT(close()));
	connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(open()));
	connect(ui.actionLoad, SIGNAL(triggered()), this, SLOT(load()));

	m_model = new CPointsModel();
	//ui.tvCoordinates->setModel(m_model);
	qDebug() << "-> Initialized";
}

void GLViewer::close()
{
	qDebug() << "-> Exit";
	QCoreApplication::quit();
}

void GLViewer::open()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open 1D File"), "", tr("1D File (*.txt);;All Files (*)"));
	ui.leFilePath->setText(fileName);
}

void GLViewer::load()
{
	std::ifstream streamIn(ui.leFilePath->text().toLatin1(), std::ofstream::in);
	std::string strLine;

	QStringList list;
	getline(streamIn, strLine);
	while (getline(streamIn, strLine))
	{
		CPosition pos;
		if (loadImuLine(strLine, pos))
		{
			m_model->insertRow(pos.stationing, pos.easting, pos.northing);
		}
	}
	ui.tvCoordinates->setModel(m_model);
}

bool GLViewer::loadImuLine(const std::string & strLine, CPosition & line)
{
	const char* firstValue;
	char* nextValue;
	const char delimiter = ';';
	if (!strLine.empty())
	{
		firstValue = (strLine.c_str());
		line.stationing = strtod(firstValue, &nextValue);
		line.easting = strtod(++nextValue, &nextValue);
		line.northing = strtod(++nextValue, &nextValue);
		line.elevation = strtod(++nextValue, &nextValue);
		line.azimuth = strtod(++nextValue, &nextValue);

		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		nextValue = strchr(++nextValue, delimiter);
		return true;
	}
	else
	{
		return false;
	}
}
