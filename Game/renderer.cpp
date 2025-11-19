#include "header.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>


void bitmap_output(int x, int y, const char* string, void* font)
{
    int len, i;

    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++) {
        glutBitmapCharacter(font, string[i]);
    }
}

void stroke_output(GLfloat x, GLfloat y, const char* format, ...)
{
    va_list args;
    char buffer[200], * p;

    va_start(args, format);
    vsprintf_s(buffer, format, args);
    va_end(args);
    glPushMatrix();
    glTranslatef(x, y, 0);
    glScalef(0.005, 0.005, 0.005);
    for (p = buffer; *p; p++)
        glutStrokeCharacter(GLUT_STROKE_ROMAN, *p);
    glPopMatrix();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    bitmap_output(40, 35, "This is written in a GLUT bitmap font.", GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(30, 210, "More bitmap text is a fixed 9 by 15 font.", GLUT_BITMAP_9_BY_15);
    bitmap_output(70, 240, "Helvetica is yet another bitmap font.", GLUT_BITMAP_HELVETICA_18);
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    gluPerspective(40.0, 1.0, 0.1, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    gluLookAt(0.0, 0.0, 4.0,  /* eye is at (0,0,30) */
        0.0, 0.0, 0.0,      /* center is at (0,0,0) */
        0.0, 1.0, 0.);      /* up is in postivie Y direction */
    glPushMatrix();
    glTranslatef(0, 0, -4);
    glRotatef(50, 0, 1, 0);
    stroke_output(-2.5, 1.1, "  This is written in a");
    stroke_output(-2.5, 0, " GLUT stroke font.");
    stroke_output(-2.5, -1.1, "using 3D perspective.");
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glFlush();
}
