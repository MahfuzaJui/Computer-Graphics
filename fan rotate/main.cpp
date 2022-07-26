#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float x,y,i;
float counter=0.0;
void init(void)
{
	//gluOrtho2D(0,800,400,0);
	//glOrtho(0,800,500,0,1,-1);
}
void fan(void)
{
	glClearColor(57,172,179,0.22);
	glClear(GL_COLOR_BUFFER_BIT);
	//glPointSize(10.0);
	//glLoadIdentity();

	 glLoadIdentity();

	 glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,0,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.8*sin(i);
			y=0.8*cos(i);
			glVertex2f(x,y);
		}
	glEnd();


	glPushMatrix();

    glRotatef(counter1,0.0,0.0,0.1);
    glLineWidth(5);
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(0,0);
	glVertex2f(0, 0.25);

	glEnd();

	glPopMatrix();
	 counter1-=0.0266f;

	glPushMatrix();
    glRotatef(counter2,0.0,0.0,0.1);
	glLineWidth(7);
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(0,0);
	glVertex2f(0.2, 0);

	glEnd();

	glPopMatrix();
	counter2 -=0.001f;

	glutSwapBuffers();
}
int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowPosition(-1,-1);
	glutInitWindowSize(640,480);
	glutCreateWindow("Fan");
	init();
	glutDisplayFunc(fan);
	glutIdleFunc(fan);
	glutMainLoop();
	return 0;
}
