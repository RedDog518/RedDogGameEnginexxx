#include "opengltestwindow.h"

OpenGLTestWindow::OpenGLTestWindow(QWidget *parent)
	: QOpenGLWidget(parent)
{}

OpenGLTestWindow::~OpenGLTestWindow()
{}

void OpenGLTestWindow::initializeGL()
{
	initializeOpenGLFunctions();
	glClearColor(0, 0, 0, 1);
}

void OpenGLTestWindow::resizeGL(int w, int h)
{
}

void OpenGLTestWindow::paintGL()
{
}
