#include "header.h"
#include <ctime>
#include <stdio.h>
#include <stdarg.h>

void output(int x, int y, const char* string)
{
    int len, i;

    len = (int)strlen(string);
    glRasterPos2f(x,y);
    for (i = 0; i < len; i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);
    }
}

UIobject::UIobject()
{
	w = 1;
	h = 1;
	x0 = -0.5; 
	y0 = -0.5;
	state = true;
	text = "default text";

}

void UIobject::show()
{
    
    if (state == true)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0.5, 0.5, 0.5);

        glBegin(GL_QUADS);
        glVertex2f(x0, y0);
        glVertex2f(x0, y0 + h);
        glVertex2f(x0 + w, y0 + h);
        glVertex2f(x0 + w, y0);
        glEnd();

        glColor3f(0, 1, 0.5);
        output(0, 0, "default text");
        glFlush();
    }
}