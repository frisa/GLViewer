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
	glClearColor(1,1,1,1);

	bool res;
	res = m_program.addShaderFromSourceFile(QOpenGLShader::Vertex, ":/Shaders/vshader.glsl");
	if (!res)
		qWarning() << m_program.log();
	else
		qDebug() << "-> Vertext shader compiled";

	res = m_program.addShaderFromSourceFile(QOpenGLShader::Vertex, ":/Shaders/fshader.glsl");
	if (!res)
		qWarning() << m_program.log();
	else
		qDebug() << "-> Fragment shader compiled";

}

void GLWidget::resizeGL(int w, int h)
{
}

void GLWidget::paintGL()
{
}
