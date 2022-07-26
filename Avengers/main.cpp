#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<iostream>

void drawCircle(int cx, int cy, int r, int red, int green, int blue) {
    glColor3ub (red, green, blue);
    glBegin(GL_LINES);
    float y1, y2;
    for(float x = cx-r; x <= cx+r; x = x + 1) {
        y1 = sqrt(r*r - (x- cx)*(x-cx)) + cy;
        y2 = cy - sqrt(r*r - (x- cx)*(x-cx));
        glVertex2i(x, y1);
        glVertex2i(x, y2);
    }
    glEnd();
}

void drawRect(int x, int y, int w, int h) {
        glBegin(GL_QUADS);
        glVertex2i(x, y);
        glVertex2i(x, y+h);
        glVertex2i(x+w, y+h);
        glVertex2i(x+w, y);
        glEnd();
}

void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(128, 128, 128);
    glPointSize(5.0);
    drawCircle(250, 250, 237, 255, 0, 0);
    drawCircle(250, 250, 202, 255, 255, 255);
    drawCircle(250, 250, 170, 255, 0, 0);
    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);
    glVertex2i(132, 33);
    glVertex2i(78, 77);
    glVertex2i(287, 507);
    glVertex2i(287, 395);
    glVertex2i(132, 33);
    glEnd();
    drawRect(285, 273, 60, 384);
    drawRect(165, 168, 124, 64);



    glBegin(GL_TRIANGLES);
    glVertex2i(285, 123);
    glVertex2i(345, 123);
    glVertex2i(345, 174);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(285, 143);
    glVertex2i(285, 256);
    glVertex2i(352, 195);
    glEnd();
    glFlush();

}

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("AVENGERS");
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();
}
