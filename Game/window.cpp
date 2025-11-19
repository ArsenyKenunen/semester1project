#include "header.h"
#include <ctime>


void reshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, w, 0, h);
	glScalef(1, -1, 1);
	glTranslatef(0, -h, 0);
	glMatrixMode(GL_MODELVIEW);
}



window::window(int argc, char** argv)
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

void window::run(void)
{
	glutMainLoop();
}
