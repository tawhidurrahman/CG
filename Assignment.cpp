#include <stdio.h>
#include <GL/glut.h>
void DrawScene(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(1.0);
    glBegin(GL_POLYGON);
    glVertex2i(5, 100);
    glVertex2i(35, 35);
    glVertex2i(100, 0);
    glVertex2i(180, 0);
    glVertex2i(245, 35);
    glVertex2i(275, 100);
    glVertex2i(245, 165);
    glVertex2i(180, 200);
    glVertex2i(100, 200);
    glVertex2i(35, 165);
    glEnd();
    glFlush ();
}
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}
main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 800);
    glutInitWindowPosition (0, 0);

    glutCreateWindow ("Decagon");
    glutDisplayFunc(DrawScene);
    myInit ();
    glutMainLoop();
}

