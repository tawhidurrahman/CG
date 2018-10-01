#include <stdio.h>
#include <GL/glut.h>
void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(0, 70);
    glVertex2i(70, 0);
    glVertex2i(240, 0);
    glVertex2i(310, 70);
    glVertex2i(310, 140);
    glVertex2i(240, 210);
    glVertex2i(70, 210);
    glVertex2i(0, 140);
    glEnd();

    int x = 10;
    int y = 70;

    while (y <= 130)
    {
        glColor3f (1.0, 1.0, 0.0);
        glPointSize(1.0);
        glBegin(GL_QUADS);
        glVertex2i(x, y);
        glVertex2i(x + 10, y);
        glVertex2i(x + 10, y + 10);
        glVertex2i(x, y + 10);
        glEnd();
        y += 10;
    }

    x = 290;
    y = 70;

    while (y <= 130)
    {
        glColor3f (1.0, 1.0, 0.0);
        glPointSize(1.0);
        glBegin(GL_QUADS);
        glVertex2i(x, y);
        glVertex2i(x + 10, y);
        glVertex2i(x + 10, y + 10);
        glVertex2i(x, y + 10);
        glEnd();
        y += 10;
    }

    x = 70;
    y = 10;

    while (x <= 230)
    {
        glColor3f (1.0, 1.0, 0.0);
        glPointSize(1.0);
        glBegin(GL_QUADS);
        glVertex2i(x, y);
        glVertex2i(x + 10, y);
        glVertex2i(x + 10, y + 10);
        glVertex2i(x, y + 10);
        glEnd();
        x += 10;
    }

    x = 70;
    y = 20;

    while (x <= 230)
    {
        if (x != 90 && x != 150 && x != 210)
        {
            glColor3f (1.0, 1.0, 0.0);
            glPointSize(1.0);
            glBegin(GL_QUADS);
            glVertex2i(x, y);
            glVertex2i(x + 10, y);
            glVertex2i(x + 10, y + 10);
            glVertex2i(x, y + 10);
            glEnd();
        }

        x += 10;
    }

    x = 70;
    y = 190;

    while (x <= 230)
    {
        glColor3f (1.0, 1.0, 0.0);
        glPointSize(1.0);
        glBegin(GL_QUADS);
        glVertex2i(x, y);
        glVertex2i(x + 10, y);
        glVertex2i(x + 10, y + 10);
        glVertex2i(x, y + 10);
        glEnd();
        x += 10;
    }

    x = 70;
    y = 180;

    while (x <= 230)
    {
        if (x != 130 && x != 170)
        {
            glColor3f (1.0, 1.0, 0.0);
            glPointSize(1.0);
            glBegin(GL_QUADS);
            glVertex2i(x, y);
            glVertex2i(x + 10, y);
            glVertex2i(x + 10, y + 10);
            glVertex2i(x, y + 10);
            glEnd();
        }
        x += 10;
    }

    x = 20;
    y = 130;

    while (y <= 170)
    {
        glColor3f (1.0, 1.0, 0.0);
        glPointSize(1.0);
        glBegin(GL_POLYGON);
        glVertex2i(x, y);
        glVertex2i(x + 10, y);
        glVertex2i(x + 10, y + 20);
        glVertex2i(x, y + 20);
        glEnd();
        x += 10;
        y += 10;
    }

    x = 20;
    y = 60;

    while (y >= 20)
    {
        glColor3f (1.0, 1.0, 0.0);
        glPointSize(1.0);
        glBegin(GL_POLYGON);
        glVertex2i(x, y);
        glVertex2i(x + 10, y);
        glVertex2i(x + 10, y + 20);
        glVertex2i(x, y + 20);
        glEnd();
        x += 10;
        y -= 10;
    }

    x = 240;
    y = 20;

    while (y <= 60)
    {
        glColor3f (1.0, 1.0, 0.0);
        glPointSize(1.0);
        glBegin(GL_POLYGON);
        glVertex2i(x, y);
        glVertex2i(x + 10, y);
        glVertex2i(x + 10, y + 20);
        glVertex2i(x, y + 20);
        glEnd();
        x += 10;
        y += 10;
    }

    x = 280;
    y = 130;

    while (y <= 170)
    {
        glColor3f (1.0, 1.0, 0.0);
        glPointSize(1.0);
        glBegin(GL_POLYGON);
        glVertex2i(x, y);
        glVertex2i(x + 10, y);
        glVertex2i(x + 10, y + 20);
        glVertex2i(x, y + 20);
        glEnd();
        x -= 10;
        y += 10;
    }

    glColor3f (1.0, 1.0, 0.0);
    glPointSize(1.0);
    glBegin(GL_POLYGON);
    glVertex2i(110, 30);
    glVertex2i(140, 30);
    glVertex2i(140, 50);
    glVertex2i(110, 50);
    glEnd();

    glColor3f (1.0, 1.0, 0.0);
    glPointSize(1.0);
    glBegin(GL_POLYGON);
    glVertex2i(170, 30);
    glVertex2i(200, 30);
    glVertex2i(200, 50);
    glVertex2i(170, 50);
    glEnd();

    glColor3f (1.0, 1.0, 0.0);
    glPointSize(1.0);
    glBegin(GL_QUADS);
    glVertex2i(100, 30);
    glVertex2i(110, 30);
    glVertex2i(110, 40);
    glVertex2i(100, 40);
    glEnd();

    glColor3f (1.0, 1.0, 0.0);
    glPointSize(1.0);
    glBegin(GL_QUADS);
    glVertex2i(200, 30);
    glVertex2i(210, 30);
    glVertex2i(210, 40);
    glVertex2i(200, 40);
    glEnd();

    glColor3f (1.0, 1.0, 0.0);
    glPointSize(1.0);
    glBegin(GL_QUADS);
    glVertex2i(120, 50);
    glVertex2i(130, 50);
    glVertex2i(130, 60);
    glVertex2i(120, 60);
    glEnd();

    glColor3f (1.0, 1.0, 0.0);
    glPointSize(1.0);
    glBegin(GL_QUADS);
    glVertex2i(180, 50);
    glVertex2i(190, 50);
    glVertex2i(190, 60);
    glVertex2i(180, 60);
    glEnd();

    glColor3f (1.0, 1.0, 0.0);
    glPointSize(1.0);
    glBegin(GL_QUADS);
    glVertex2i(100, 140);
    glVertex2i(130, 140);
    glVertex2i(130, 180);
    glVertex2i(100, 180);
    glEnd();

    glColor3f (1.0, 1.0, 0.0);
    glPointSize(1.0);
    glBegin(GL_QUADS);
    glVertex2i(180, 140);
    glVertex2i(210, 140);
    glVertex2i(210, 180);
    glVertex2i(180, 180);
    glEnd();

    glColor3f (1.0, 1.0, 0.0);
    glPointSize(1.0);
    glBegin(GL_QUADS);
    glVertex2i(100, 130);
    glVertex2i(120, 130);
    glVertex2i(120, 140);
    glVertex2i(100, 140);
    glEnd();

    glColor3f (1.0, 1.0, 0.0);
    glPointSize(1.0);
    glBegin(GL_QUADS);
    glVertex2i(190, 130);
    glVertex2i(210, 130);
    glVertex2i(210, 140);
    glVertex2i(190, 140);
    glEnd();

    glColor3f (1.0, 1.0, 0.0);
    glPointSize(1.0);
    glBegin(GL_QUADS);
    glVertex2i(90, 140);
    glVertex2i(100, 140);
    glVertex2i(100, 170);
    glVertex2i(90, 170);
    glEnd();

    glColor3f (1.0, 1.0, 0.0);
    glPointSize(1.0);
    glBegin(GL_QUADS);
    glVertex2i(210, 140);
    glVertex2i(220, 140);
    glVertex2i(220, 170);
    glVertex2i(210, 170);
    glEnd();

    x = 0;
    y = 140;

    while (y <= 200)
    {
        glColor3f (1.0, 1.0, 1.0);
        glPointSize(1.0);
        glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
        glVertex2i(x + 10, y);
        glVertex2i(x + 10, y + 10);
        glEnd();
        x += 10;
        y += 10;
    }

    x = 0;
    y = 70;

    while (y >= 10)
    {
        glColor3f (1.0, 1.0, 1.0);
        glPointSize(1.0);
        glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
        glVertex2i(x + 10, y);
        glVertex2i(x + 10, y - 10);
        glEnd();
        x += 10;
        y -= 10;
    }

    x = 240;
    y = 0;

    while (y <= 70)
    {
        glColor3f (1.0, 1.0, 1.0);
        glPointSize(1.0);
        glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
        glVertex2i(x + 10, y + 10);
        glVertex2i(x, y + 10);
        glEnd();
        x += 10;
        y += 10;
    }

    x = 300;
    y = 140;

    while (y <= 200)
    {
        glColor3f (1.0, 1.0, 1.0);
        glPointSize(1.0);
        glBegin(GL_TRIANGLES);
        glVertex2i(x, y);
        glVertex2i(x + 10, y);
        glVertex2i(x, y + 10);
        glEnd();
        x -= 10;
        y += 10;
    }


    glFlush ();
}
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 310.0, 0.0, 210.0);
}
main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (310, 210);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("Hello World");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}



