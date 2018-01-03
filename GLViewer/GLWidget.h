#pragma once
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>

class GLWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
private:
	QOpenGLShaderProgram m_program;

public:
	GLWidget(QWidget *parent);
	virtual ~GLWidget();

protected:
	void initializeGL();
	void resizeGL(int w, int h);
	void paintGL();
};

