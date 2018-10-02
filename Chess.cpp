#include <stdio.h>
#include <GL/glut.h>
void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    int z = 0;
    int w = 0;

    for (int x=0; x<400; x+=50)
    {
        z =0;
        if (w % 2 == 0)
        {
            z = 0;
        }
        else
        {
            z = 1;
        }
        for (int y=0; y<400; y+=50)
        {
            if (z % 2 == 0)
            {
                glColor3f (1.0, 1.0, 1.0);
                glPointSize(5.0);
                glBegin(GL_QUADS);
                glVertex2i(x + 0, y + 0);
                glVertex2i(x + 50, y + 0);
                glVertex2i(x + 50, y + 50);
                glVertex2i(x + 0, y + 50);
                glEnd();
            }
            else
            {
                glColor3f (0.0, 0.0, 0.0);
                glPointSize(5.0);
                glBegin(GL_QUADS);
                glVertex2i(x + 0, y + 0);
                glVertex2i(x + 50, y + 0);
                glVertex2i(x + 50, y + 50);
                glVertex2i(x + 0, y + 50);
                glEnd();
            }
            z++;
        }
        w++;
    }


    glFlush ();
}
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}
main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("Hello World");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}


