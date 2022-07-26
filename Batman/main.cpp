#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>


void myDisplay(void)
{

    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.1, 0.1, 0.1);
    glPointSize(4.0);

    //ears
    glBegin(GL_QUADS);
    glColor3f ( 0,0,0 );
    glVertex2i(145,300);
    glVertex2i(170,300);
    glVertex2i(170,360);
    glVertex2i(145,360);
    glEnd();
    glFlush ();

    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30);
    glVertex2i(190,300);
    glVertex2i(215,300);
    glVertex2i(215,360);
    glVertex2i(190,360);

    glEnd();
    glFlush ();

    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(170,300);
    glVertex2i(190,300);
    glVertex2i(190,330);
    glVertex2i(170,330);

    glEnd();
    glFlush ();

    //eyes
    glBegin(GL_QUADS);
    glColor3f ( 0.67,0.40,0.07 );
    glVertex2i(145,300);
    glVertex2i(170,300);
    glVertex2i(170,280);
    glVertex2i(145,280);
    glEnd();
    glFlush ();

    //skin
    glBegin(GL_QUADS);
    glColor3f ( 0.97,0.61,0.20 );
    glVertex2i(170,300);
    glVertex2i(215,300);
    glVertex2i(215,280);
    glVertex2i(170,280);

    glEnd();
    glFlush ();

    glBegin(GL_QUADS);
    glColor3f ( 0.47,0.47,0.47 );
    glVertex2i(120,280);
    glVertex2i(240,280);
    glVertex2i(240,250);
    glVertex2i(120,250);

    glEnd();
    glFlush ();

    glBegin(GL_QUADS);
    glColor3f ( 0.47,0.47,0.47 );
    glVertex2i(100,250);
    glVertex2i(260,250);
    glVertex2i(260,225);
    glVertex2i(100,225);

    glEnd();
    glFlush();

    glBegin(GL_QUADS);
    glColor3f ( 0.97,0.61,0.20 );
    glVertex2i(100,225);
    glVertex2i(260,225);
    glVertex2i(260,200);
    glVertex2i(100,200);

    glEnd();
    glFlush ();


    glBegin(GL_QUADS);
    glColor3f ( 0.47,0.47,0.47 );
    glVertex2i(120,225);
    glVertex2i(240,225);
    glVertex2i(240,200);
    glVertex2i(120,200);

    glEnd();
    glFlush ();

    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(100,200);
    glVertex2i(260,200);
    glVertex2i(260,175);
    glVertex2i(100,175);

    glEnd();
    glFlush ();

    //Belt
    glBegin(GL_QUADS);
    glColor3f ( 0.99,0.93,0.13 );
    glVertex2i(120,200);
    glVertex2i(240,200);
    glVertex2i(240,175);
    glVertex2i(120,175);

    glEnd();
    glFlush ();


    glBegin(GL_QUADS);
    glColor3f ( 0.0 ,0.0 ,0.0 );
    glVertex2i(100,175);
    glVertex2i(260,175);
    glVertex2i(260,110);
    glVertex2i(100,110);

    glEnd();
    glFlush ();

    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(120,175);
    glVertex2i(240,175);
    glVertex2i(240,150);
    glVertex2i(120,150);

    glEnd();
    glFlush ();

    glBegin(GL_QUADS);
    glColor3f ( 0.4,0.4,0.4 );
    glVertex2i(120,150);
    glVertex2i(170,150);
    glVertex2i(170,70);
    glVertex2i(120,70);

    glEnd();
    glFlush ();

    glBegin(GL_QUADS);
    glColor3f ( 0.4,0.4,0.4 );
    glVertex2i(240,150);
    glVertex2i(190,150);
    glVertex2i(190,70);
    glVertex2i(240,70);

    glEnd();
    glFlush ();


    glBegin(GL_QUADS);
    glColor3f ( 0.02,0.04,0.12 );
    glVertex2i(120,175);
    glVertex2i(145,175);
    glVertex2i(145,150);
    glVertex2i(120,150);

    glEnd();
    glFlush ();

    //bottom
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(145,150);
    glVertex2i(215,150);
    glVertex2i(215,130);
    glVertex2i(145,130);

    glEnd();
    glFlush ();
    //legs shadow
    glBegin(GL_QUADS);
    glColor3f ( 0.2,0.2,0.2 );
    glVertex2i(120,150);
    glVertex2i(145,150);
    glVertex2i(145,70);
    glVertex2i(120,70);

    glEnd();
    glFlush ();

    glBegin(GL_QUADS);
    glColor3f ( 0.2,0.2,0.2 );
    glVertex2i(215,130);
    glVertex2i(190,130);
    glVertex2i(190,70);
    glVertex2i(215,70);

    glEnd();
    glFlush ();

    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(120,70);
    glVertex2i(170,70);
    glVertex2i(170,50);
    glVertex2i(120,50);

    glEnd();

    glFlush ();


    glBegin(GL_QUADS);
    glColor3f ( 0.02,0.05,0.12 );
    glVertex2i(120,70);
    glVertex2i(145,70);
    glVertex2i(145,50);
    glVertex2i(120,50);

    glEnd();
    glFlush ();

    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(215,70);
    glVertex2i(240,70);
    glVertex2i(240,50);
    glVertex2i(215,50);

    glEnd();
    glFlush ();

    glBegin(GL_QUADS);
    glColor3f ( 0.02,0.05,0.12 );
    glVertex2i(190,70);
    glVertex2i(215,70);
    glVertex2i(215,50);
    glVertex2i(190,50);

    glEnd();
    glFlush ();

    //batman logo
    glBegin(GL_QUADS);
    glColor3f ( 0.2,0.2,0.2 );
    glVertex2i(145,250);
    glVertex2i(215,250);
    glVertex2i(215,225);
    glVertex2i(145,225);

    glEnd();
    glFlush ();

}

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(6.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 310.0, 0.0, 400.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 900);
    glutInitWindowPosition (450, 50);
    glutCreateWindow ("Batman");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
