#include <gl/glut.h>
#include <iostream>
using namespace std;

void Creeper(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	// Border
	glColor3f(0.0f, 0.0f, 0.0f); glRectf(1, 1, -1, -1);
	glColor3f(0.0f, 1.0f, 0.0f); glRectf(0.9, 0.9, -0.9, -0.9);

	// Creeper Face
	glColor3f(0.0f, 0.0f, 0.0f);
	glRectf(0.2,0.2,0.6,0.6);
	glRectf(-0.2, 0.2, -0.6, 0.6);
	glRectf(-0.2, 0.2, 0.2, -0.4);
	glRectf(-0.4, 0.0, -0.2, -0.6);
	glRectf(0.4, 0.0, 0.2, -0.6);

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
	glutInitWindowSize(640, 640);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Creeper");
	glutDisplayFunc(Creeper);
	glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
	glutMainLoop();

	return 0;
}
