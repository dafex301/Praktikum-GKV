#include <iostream>
using namespace std;
#include <gl/glut.h>

void line(void)
{
	// GL_LINE_STRIP
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(50.0f);
	glBegin(GL_LINE_STRIP);
	glColor3ub(255, 10, 10); glVertex3f(-0.9, 0.9, 0.0);
	glColor3ub(255, 213, 61); glVertex3f(-0.4, 0.2, 0.0);
	glColor3ub(10, 255, 79); glVertex3f(-0.9, 0.2, 0.0);
	glColor3ub(23, 43, 255); glVertex3f(-0.4, 0.9, 0.0);
	glEnd();

	// GL_LINE_LOOP
	glBegin(GL_LINE_LOOP);
	glColor3ub(255, 10, 10); glVertex3f(-0.2, 0.9, 0.0);
	glColor3ub(255, 213, 61); glVertex3f(0.3, 0.2, 0.0);
	glColor3ub(10, 255, 79); glVertex3f(-0.2, 0.2, 0.0);
	glColor3ub(23, 43, 255); glVertex3f(0.3, 0.9, 0.0);
	glEnd();	
	
	// GL_TRIANGLE_FAN
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 10, 10); glVertex3f(0.5, 0.9, 0.0);
	glColor3ub(255, 213, 61); glVertex3f(0.9, 0.2, 0.0);
	glColor3ub(10, 255, 79); glVertex3f(0.5, 0.2, 0.0);
	glColor3ub(23, 43, 255); glVertex3f(0.9, 0.9, 0.0);
	glEnd();

	// GL_TRIANGLE_STRIP
	glBegin(GL_TRIANGLE_STRIP);
	glColor3ub(255, 10, 10); glVertex3f(-0.9, -0.2, 0.0);
	glColor3ub(255, 213, 61); glVertex3f(-0.4, -0.9, 0.0);
	glColor3ub(10, 255, 79); glVertex3f(-0.9, -0.9, 0.0);
	glColor3ub(23, 43, 255); glVertex3f(-0.4, -0.2, 0.0);
	glEnd();

	// GL_QUADS
	glBegin(GL_QUADS);
	glColor3ub(255, 10, 10); glVertex3f(-0.2, -0.2, 0.0);
	glColor3ub(255, 213, 61); glVertex3f(0.3, -0.9, 0.0);
	glColor3ub(10, 255, 79); glVertex3f(-0.2, -0.9, 0.0);
	glColor3ub(23, 43, 255); glVertex3f(0.3, -0.2, 0.0);
	glEnd();	
	
	// GL_QUADS
	glBegin(GL_QUAD_STRIP);
	glColor3ub(255, 10, 10); glVertex3f(0.5, -0.2, 0.0);
	glColor3ub(255, 213, 61); glVertex3f(0.9, -0.9, 0.0);
	glColor3ub(10, 255, 79); glVertex3f(0.5, -0.9, 0.0);
	glColor3ub(23, 43, 255); glVertex3f(0.9, -0.2, 0.0);
	glEnd();
	
	glFlush();
}

int main(int argc, char* argv[])
{
	cout << "|=======================|\n";
	cout << "|        Made by        |\n";
	cout << "| Fahrel Gibran Alghany |\n";
	cout << "|    24060120130106     |\n";
	cout << "|      22/02/2022       |\n";
	cout << "|=======================|\n";
	glutInit(&argc, argv);
	glutInitWindowSize(1280, 720);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Line");
	glutDisplayFunc(line);
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glutMainLoop();

	return 0;
}
