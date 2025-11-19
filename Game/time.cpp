#include "header.h"
#include <ctime>

void Timer(int value) {
	glutTimerFunc(33, Timer, 0);
	glutPostRedisplay();
}