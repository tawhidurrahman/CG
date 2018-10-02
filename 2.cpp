#include <stdio.h>
#include <GL/glut.h>
void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(100, 50);
    glVertex2i(100, 130);
    glVertex2i(150, 130);
    glEnd();
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(500, 50);
    glVertex2i(500, 130);
    glVertex2i(550, 130);
    glVertex2i(550, 50);
    glEnd();
    glFlush ();
}
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("Hello World");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}


