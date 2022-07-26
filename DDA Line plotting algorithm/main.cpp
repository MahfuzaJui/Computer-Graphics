#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>

using namespace std;


int x1,x2,y1,y2;

void display (void)
{
    int dx=x2-x1;
    int dy=y2-y1;
    float m0 = dy/dx;
    float x=x1,y=y1;
    int number_of_loops;
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (255,255,0);
    glPointSize(1.0);
    glBegin(GL_POINTS);
    glVertex2i(x,y);
    float m =m0;
    if(dx>dy)
    number_of_loops=dx;
    else
    number_of_loops=dy;

    for(int j=0;j<number_of_loops;j++)
    {
        if(m<1)

        {
            x = x+1;
            y=y+m;
            glVertex2i(x,y);
        }

        else if(m>1)

        {
            x = x+(1/m);
            y = y+1;
            glVertex2i(x,y);

        }

        else if(m==1)

        {
            x=x+1;
            y=y+1;
            glVertex2i(x,y);

        }

    }

    glEnd();
    glFlush();

}

void myInit(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 700.0, 0.0, 700.0);
}


int main(int argc, char** argv)
{
    cout<<("Enter the points\n(X1,Y1,X2,Y2):-\n");
    cin>>x1>>y1>>x2>>y2;
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (900, 900);
    glutInitWindowPosition (450, 100);
    glutCreateWindow ("DDA Line Plotting Algorithm Program");
    myInit ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}
