#include "header.h"

void display(void) {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(0.0f, 1.0f, 0.5f);
	glPointSize(1.0f);
	gluOrtho2D(0.0f, 640.0f, 0.0f, 480.0f);

	glClear(GL_COLOR_BUFFER_BIT);



	glFlush();
}