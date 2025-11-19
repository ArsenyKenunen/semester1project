#include "header.h"
#include <ctime>

void display(void);
void Timer(int value);

#ifndef WINDOW_H
#define WINDOW_H

void reshape(int w, int h)
{

}
 
class window
{
public:
	const char * windowName;

	window(int argc, char** argv)
	{
		windowName = "Game";
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowPosition(0, 0);

		glutInitWindowSize(640, 480);
		glutReshapeFunc(reshape);
		glutCreateWindow(this->windowName);

		glutDisplayFunc(display);
	}
private:
	
};

#endif // WINDOW_H