#include <QApplication>
#include "opengltestwindow.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	OpenGLTestWindow* w = new OpenGLTestWindow;
	w->show();
	return app.exec();
}