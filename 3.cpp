#include <stdio.h>
#include <GL/glut.h>
void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.93, 0.93, 0.0);
    glPointSize(2.0);
    glBegin(GL_POLYGON);
    glVertex2i(100, 200);
    glVertex2i(200, 100);
    glVertex2i(500, 100);
    glVertex2i(600, 200);
    glEnd();

    glColor3f (0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(450, 200);
    glVertex2i(450, 280);
    glVertex2i(420, 280);
    glVertex2i(420, 200);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(370, 200);
    glVertex2i(370, 280);
    glVertex2i(340, 280);
    glVertex2i(340, 200);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(290, 200);
    glVertex2i(290, 280);
    glVertex2i(260, 280);
    glVertex2i(260, 200);
    glEnd();

    glColor3f (0.67, 0.67, 0.67);
    glBegin(GL_POLYGON);
    glVertex2i(280, 290);
    glVertex2i(280, 300);
    glVertex2i(270, 300);
    glVertex2i(270, 290);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270, 310);
    glVertex2i(270, 320);
    glVertex2i(260, 320);
    glVertex2i(260, 310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(280, 330);
    glVertex2i(280, 340);
    glVertex2i(270, 340);
    glVertex2i(270, 330);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(290, 350);
    glVertex2i(290, 360);
    glVertex2i(280, 360);
    glVertex2i(280, 350);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(280, 370);
    glVertex2i(280, 380);
    glVertex2i(270, 380);
    glVertex2i(270, 370);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270, 390);
    glVertex2i(270, 400);
    glVertex2i(260, 400);
    glVertex2i(260, 390);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(360, 290);
    glVertex2i(360, 300);
    glVertex2i(350, 300);
    glVertex2i(350, 290);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(350, 310);
    glVertex2i(350, 320);
    glVertex2i(340, 320);
    glVertex2i(340, 310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(360, 330);
    glVertex2i(360, 340);
    glVertex2i(350, 340);
    glVertex2i(350, 330);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(370, 350);
    glVertex2i(370, 360);
    glVertex2i(360, 360);
    glVertex2i(360, 350);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(360, 370);
    glVertex2i(360, 380);
    glVertex2i(350, 380);
    glVertex2i(350, 370);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(350, 390);
    glVertex2i(350, 400);
    glVertex2i(340, 400);
    glVertex2i(340, 390);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(440, 290);
    glVertex2i(440, 300);
    glVertex2i(430, 300);
    glVertex2i(430, 290);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(430, 310);
    glVertex2i(430, 320);
    glVertex2i(420, 320);
    glVertex2i(420, 310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(440, 330);
    glVertex2i(440, 340);
    glVertex2i(430, 340);
    glVertex2i(430, 330);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(450, 350);
    glVertex2i(450, 360);
    glVertex2i(440, 360);
    glVertex2i(440, 350);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(440, 370);
    glVertex2i(440, 380);
    glVertex2i(430, 380);
    glVertex2i(430, 370);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(430, 390);
    glVertex2i(430, 400);
    glVertex2i(420, 400);
    glVertex2i(420, 390);
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


