#include <iostream>
#include "GL/glut.h"
#pragma comment(lib,"freeglut.lib")
void reshape(int w,int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,w,0,h);

    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();
}
void square()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(200, 200);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(200, 400);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(400, 400);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(400, 200);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(200, 200);
    glEnd();
    glutSwapBuffers();
}
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
    glutInitWindowSize(800,600);
    glutCreateWindow("hui");
    glutReshapeFunc(reshape);
    glutDisplayFunc(square);

    glutMainLoop();

    return  0;
}