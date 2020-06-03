#include <iostream>
#include <GL/freeglut.h>
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);//layang-layang
	glColor3f(0, 1, 1);
	glVertex2f(80.0, 400.0);
	glColor3f(1, 0, 0);
	glVertex2f(80.0, 300.0);
	glColor3f(1, 1, 0);
	glVertex2f(180.0, 300.0);
	glVertex2f(180.0, 400.0);
	glEnd();
	glLineWidth(2.0);
	glBegin(GL_LINE_LOOP);//hiasan layang
	glColor3f(0.5, 0, 0.5);
	glVertex2f(85.0, 380.0);
	glColor3f(0, 1, 0.5);
	glVertex2f(85.0, 320.0);
	glVertex2f(170.0, 380.0);
	glEnd();
	glLineWidth(1.0);
	glBegin(GL_LINES);//tali layang
	glColor3f(0, 0, 0);
	glVertex2f(180.0, 300.0);	
	glVertex2f(340.0, 90.0);
	glEnd();
	glLineWidth(3.0);
	glBegin(GL_LINES);//pita layang
	glColor3f(1.0, 0.5, 0);
	glVertex2f(180.0, 300.0);
	glColor3f(0, 0, 1);
	glVertex2f(160.0, 240.0);
	glColor3f(1.0, 0.5, 0);
	glVertex2f(180.0, 300.0);
	glColor3f(0, 0, 1);
	glVertex2f(240.0, 280.0);
	glEnd();
	glFlush();
}
void init() {
	glClearColor(0.5, 1.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 639.0, 0.0, 479.0);
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tugas 2-672018297");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
	return 0;

}