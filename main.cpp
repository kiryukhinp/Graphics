#include <iostream>
#include "GL/glut.h"

void reshape(int w,int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,w,0,h);

    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3b(255,0,0);
    glVertex2i(250,450);
    glColor3b(0,0,255);
    glVertex2i(250,150);
    glColor3b(0,255,0);
    glVertex2i(550,450);
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
    glutDisplayFunc(display);

    glutMainLoop();

    return  0;
}