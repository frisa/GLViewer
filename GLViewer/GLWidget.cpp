#include "GLWidget.h"

GLWidget::GLWidget(QWidget * parent) : QOpenGLWidget(parent)
{
}

GLWidget::~GLWidget()
{
}

void GLWidget::initializeGL()
{
	initializeOpenGLFunctions();
	char* glVersion = (char*)glGetString(GL_VERSION);
	qDebug() << "-> OpenGL version: " << glVersion;

	bool res;
	res = m_program.addShaderFromSourceFile(QOpenGLShader::Vertex, ":/Shaders/vshader.2glsl");
	if (!res)
		qWarning() << m_program.log();
	else
		qDebug() << "-> Vertext shader compiled";

	res = m_program.addShaderFromSourceFile(QOpenGLShader::Vertex, ":/Shaders/fshader.glsl");
	if (!res)
		qWarning() << m_program.log();
	else
		qDebug() << "-> Fragment shader compiled";

	glClearColor(1, 1, 1, 1);
}

void GLWidget::resizeGL(int w, int h)
{
}

void GLWidget::paintGL()
{
}
