////////////////////////////////////////////////////////////////////////////
//OpenGLTestWindow
//This class is used to test the classes about CG.
//It's the model of the class RDLevel's display part.
//programa:TheRedDog
#pragma once

#include <QOpenGLWidget>
#include <QOpenGLFunctions.h>

class OpenGLTestWindow  : public QOpenGLWidget ,protected QOpenGLFunctions
{
	Q_OBJECT

public:
	OpenGLTestWindow(QWidget *parent=nullptr);
	~OpenGLTestWindow();

protected:
	void initializeGL() override;
	void resizeGL(int w, int h) override;
	void paintGL();
};
