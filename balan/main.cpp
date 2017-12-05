#include "balan.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	balan w;
	w.show();
	return a.exec();
}
