#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (192, 192, 192);
glPointSize(30.0);

glEnd();

//Star Using POLYGON
glBegin(GL_POLYGON);

glVertex2i(290,400);
glVertex2i(245,280);
glVertex2i(350,350);
glVertex2i(460,280);
glVertex2i(410,400);
glVertex2i(500,470);
glVertex2i(380,470);
glVertex2i(342,585);
glVertex2i(320,470);
glVertex2i(200,470);

glEnd();

glFlush ();
}

void myInit(void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (900, 900);
glutInitWindowPosition (450, 10);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
