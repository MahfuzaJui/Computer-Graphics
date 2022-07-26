#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(40.0);

glBegin(GL_QUADS);

glColor3f(0,0,0);
glVertex2i(260,125);
glVertex2i(260,100);
glVertex2i(330,100);
glVertex2i(330,125);

glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(300,150);
glVertex2i(300,125);
glVertex2i(330,125);
glVertex2i(330,150);

glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2i(300,175);
glVertex2i(300,150);
glVertex2i(330,150);
glVertex2i(330,175);

glEnd();


glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(370,150);
glVertex2i(370,125);
glVertex2i(400,125);
glVertex2i(400,150);

glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(370,125);
glVertex2i(370,100);
glVertex2i(440,100);
glVertex2i(440,125);

glEnd();


//socks
glBegin(GL_QUADS);
glColor3f(0.482, 0.631, 0.917);
glVertex2i(300,175);
glVertex2i(300,150);
glVertex2i(330,150);
glVertex2i(330,175);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.482, 0.631, 0.917);
glVertex2i(370,175);
glVertex2i(370,150);
glVertex2i(400,150);
glVertex2i(400,175);

glEnd();



//legs

glBegin(GL_QUADS);
glColor3f(0.054, 0.372, 0.631);
glVertex2i(370,320);
glVertex2i(370,175);
glVertex2i(400,175);
glVertex2i(400,320);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.054, 0.372, 0.631);
glVertex2i(300,320);
glVertex2i(300,175);
glVertex2i(330,175);
glVertex2i(330,320);

glEnd();




//mid part

glBegin(GL_QUADS);
glColor3f(0.054, 0.372, 0.631);
glVertex2i(310,330);
glVertex2i(310,320);
glVertex2i(390,320);
glVertex2i(390,330);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.054, 0.372, 0.631);
glVertex2i(300,350);
glVertex2i(300,330);
glVertex2i(400,330);
glVertex2i(400,350);

glEnd();



//belt



glBegin(GL_QUADS);
glColor3f(0.5,0.5,0.5);
glVertex2i(300,360);
glVertex2i(300,350);
glVertex2i(400,350);
glVertex2i(400,360);

glEnd();



//thumbs



glBegin(GL_QUADS);
glColor3f(0.992, 0.870, 0.8);
glVertex2i(275,330);
glVertex2i(275,320);
glVertex2i(310,320);
glVertex2i(310,330);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.992, 0.870, 0.8);
glVertex2i(390,330);
glVertex2i(390,320);
glVertex2i(425,320);
glVertex2i(425,330);

glEnd();



//wrists


glBegin(GL_QUADS);
glColor3f(0.992, 0.870, 0.8);
glVertex2i(275,330);
glVertex2i(275,300);
glVertex2i(300,300);
glVertex2i(300,330);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.992, 0.870, 0.8);
glVertex2i(400,330);
glVertex2i(400,300);
glVertex2i(425,300);
glVertex2i(425,330);

glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(275,360);
glVertex2i(275,330);
glVertex2i(300,330);
glVertex2i(300,360);

glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(400,360);
glVertex2i(400,330);
glVertex2i(425,330);
glVertex2i(425,360);

glEnd();



//left hand


glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(275,440);
glVertex2i(275,360);
glVertex2i(345,360);
glVertex2i(345,440);

glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2i(345,440);
glVertex2i(345,360);
glVertex2i(425,360);
glVertex2i(425,440);

glEnd();



//right hand



glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(355,440);
glVertex2i(355,360);
glVertex2i(425,360);
glVertex2i(425,440);

glEnd();



//grey shirt



glBegin(GL_QUADS);
glColor3f(0.5,0.5,0.5);
glVertex2i(345,420);
glVertex2i(345,360);
glVertex2i(355,360);
glVertex2i(355,420);

glEnd();



//jacket



glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(275,465);
glVertex2i(275,440);
glVertex2i(335,440);
glVertex2i(335,465);

glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2i(335,465);
glVertex2i(335,440);
glVertex2i(425,440);
glVertex2i(425,465);

glEnd();


glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(365,465);
glVertex2i(365,440);
glVertex2i(425,440);
glVertex2i(425,465);

glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(275,500);
glVertex2i(275,465);
glVertex2i(325,465);
glVertex2i(325,500);

glEnd();


glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2i(325,490);
glVertex2i(325,465);
glVertex2i(375,465);
glVertex2i(375,490);

glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(375,500);
glVertex2i(375,465);
glVertex2i(425,464);
glVertex2i(425,500);

glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(375,525);
glVertex2i(375,500);
glVertex2i(400,500);
glVertex2i(400,525);

glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(375,535);
glVertex2i(375,525);
glVertex2i(385,525);
glVertex2i(385,535);

glEnd();



//neck


glBegin(GL_QUADS);
glColor3f(0.992, 0.870, 0.8);
glVertex2i(325,540);
glVertex2i(325,490);
glVertex2i(375,490);
glVertex2i(375,540);

glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(300,510);
glVertex2i(300,500);
glVertex2i(325,500);
glVertex2i(325,510);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.992, 0.870, 0.8);
glVertex2i(288,565);
glVertex2i(288,510);
glVertex2i(345,510);
glVertex2i(345,565);

glEnd();



//face


glBegin(GL_QUADS);
glColor3f(0.992, 0.870, 0.8);
glVertex2i(355,565);
glVertex2i(355,540);
glVertex2i(375,540);
glVertex2i(375,565);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.992, 0.870, 0.8);
glVertex2i(355,585);
glVertex2i(355,565);
glVertex2i(365,565);
glVertex2i(365,585);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 0.8f, .8f);
glVertex2i(335,595);
glVertex2i(335,565);
glVertex2i(345,565);
glVertex2i(345,595);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.992, 0.870, 0.8);
glVertex2i(288,595);
glVertex2i(288,585);
glVertex2i(335,585);
glVertex2i(335,595);

glEnd();


//glasses


glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(300,585);
glVertex2i(300,565);
glVertex2i(335,565);
glVertex2i(335,585);

glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(288,585);
glVertex2i(288,575);
glVertex2i(300,575);
glVertex2i(300,585);

glEnd();


//face


glBegin(GL_QUADS);
glColor3f(0.992, 0.870, 0.8);
glVertex2i(288,575);
glVertex2i(288,565);
glVertex2i(300,565);
glVertex2i(300,575);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(265,585);
glVertex2i(265,565);
glVertex2i(288,565);
glVertex2i(288,585);

glEnd();


//hair


glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(265,660);
glVertex2i(265,595);
glVertex2i(325,595);
glVertex2i(325,660);

glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(325,640);
glVertex2i(325,595);
glVertex2i(390,595);
glVertex2i(390,640);

glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(365,565);
glVertex2i(365,595);
glVertex2i(390,595);
glVertex2i(390,565);

glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(355,585);
glVertex2i(355,595);
glVertex2i(375,595);
glVertex2i(375,585);

glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(345,535);
glVertex2i(345,595);
glVertex2i(355,595);
glVertex2i(355,535);

glEnd();

glFlush ();
}

void myInit(void)
{
glClearColor(0.549, 0.650, 0.796, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (900, 900);
glutInitWindowPosition (400,50);
glutCreateWindow ("HUMAN");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
