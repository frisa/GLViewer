#include "GLViewer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GLViewer w;
	
	w.show();
	return a.exec();
}
