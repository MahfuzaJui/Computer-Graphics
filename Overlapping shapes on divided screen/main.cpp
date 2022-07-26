#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (1, 128, 128);
glPointSize(30.0);
//screen divide
glBegin(GL_LINES);

glVertex2i(800,400);
glVertex2i(0,400);

glVertex2i(400,800);
glVertex2i(400,0);

glEnd();
//TRIANGLE PART
glBegin(GL_TRIANGLES);

glVertex2i(100,500);
glVertex2i(300,500);
glVertex2i(200,600);

glBegin(GL_TRIANGLES);

glVertex2i(100,600);
glVertex2i(300,600);
glVertex2i(200,700);

glEnd();

//SQUARE PART
glBegin(GL_QUADS);

glVertex2i(100,200);
glVertex2i(200,200);
glVertex2i(200,300);
glVertex2i(100,300);

glVertex2i(150,150);
glVertex2i(250,150);
glVertex2i(250,250);
glVertex2i(150,250);

glEnd();

//H SHAPED
glBegin(GL_LINES);

glVertex2i(500,100);
glVertex2i(500,300);

glEnd();



glBegin(GL_LINES);

glVertex2i(700,100);
glVertex2i(700,300);

glEnd();


glBegin(GL_LINES);

glVertex2i(500,130);
glVertex2i(700,150);

glEnd();


glBegin(GL_LINES);

glVertex2i(500,210);
glVertex2i(700,230);

glEnd();

//POLYGON part
glBegin(GL_POLYGON);

glVertex2i(600,700);
glVertex2i(700,500);
glVertex2i(600,550);
glVertex2i(500,500);

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
