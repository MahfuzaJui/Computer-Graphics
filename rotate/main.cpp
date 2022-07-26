#include<iostream>
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <cmath>


using namespace std;
//2D transformations
int x=0,y=0,i=0,p=0,n=0, choice=0;
double T = 0.0;

int *ArrayX,*ArrayY;

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub (135, 206, 235);
    glPointSize(6.0);
    glBegin(GL_POLYGON);

    for(int l=0; l<n; l++)
    {
        glVertex2i(ArrayX[l], ArrayY[l]);
    }
    glEnd();

    if( p==1)
    {
        for(i=0; i<n; i++)
        {
            ArrayX[i] = ArrayX[i]+x;
            ArrayY[i] = ArrayY[i]+y;
        }

    }
    else if(p==2)
    {
        for(i=0; i<n; i++)
        {
            ArrayX[i] = ArrayX[i]*x;
            ArrayY[i] = ArrayY[i]*x;
        }

    }
    else if(p==3)
    {
        cout << T << endl;
        if (choice==1)
        {
            for(i=0; i<n; i++)
            {
                ArrayX[i]=ArrayX[i]*cos(T)+ArrayY[i]*sin(T);
                ArrayY[i]=ArrayY[i]*cos(T)-ArrayX[i]*sin(T);
            }
        }
        else if(choice==2)
        {
            for(i=0; i<n; i++)
            {
                ArrayX[i]=ArrayX[i]*cos(T)-ArrayY[i]*sin(T);
                ArrayY[i]=ArrayX[i]*sin(T)+ArrayY[i]*cos(T);
            }
        }
    }


    glColor3ub (160, 150, 235);
    glBegin(GL_POLYGON);

    for(int l=0; l<n; l++)
    {
        glVertex2i(ArrayX[l], ArrayY[l]);
    }
    glEnd();
    glFlush ();
}

void myInit (void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}



int main(int argc, char** argv)
{
    cout<<"Enter your choice:\n   1. Translation\n   2. Scaling\n   3. Rotation\n   4. Exit\n";
    cin>>p;
    switch(p)
    {
    case 1:

        cout<<"Enter the number of edges: ";
        cin>>n;
        ArrayX = new int[n];
        ArrayY = new int[n];
        for(i=0; i<n; i++)
        {
            cout<<endl<<"Enter the co-ordinates of vertex "<<i<<":";
            cin>>ArrayX[i]>>ArrayY[i];
        }
        cout<<"Enter the translation distances for x and y: ";
        cin>>x>>y;
        break;
    case 2:

        cout<<"Enter the number of edges: ";
        cin>>n;
        ArrayX = new int[n];
        ArrayY = new int[n];
        for(i=0; i<n; i++)
        {
            cout<<endl<<"Enter the co-ordinates of vertex "<<i<<":";
            cin>>ArrayX[i]>>ArrayY[i];
        }

        cout<<"Enter the scaling factor: ";
        cin>>x;
        break;
    case 3:

        cout<<"Enter the number of edges: ";
        cin>>n;
        ArrayX = new int[n];
        ArrayY = new int[n];
        for(i=0; i<n; i++)
        {
            cout<<endl<<"Enter the co-ordinates of vertex "<<i<<":";
            cin>>ArrayX[i]>>ArrayY[i];
        }
        cout<<"Enter the T ";
        cin>>T;
        T = T * (M_PI/180.0);

        cout<< "1.Clockwise"<<endl;
        cout<< "2.Anti-Clockwise"<<endl;
        cin>>choice;
        break;
    default:

        return 0;

    }
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (900, 900);
    glutInitWindowPosition (400, 50);
    glutCreateWindow ("2D Transformation");


    glutDisplayFunc(myDisplay);

    myInit ();
    glutMainLoop();

}
