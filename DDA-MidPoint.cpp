#include <bits/stdc++.h>
#include <stdio.h>
#include <GL/glut.h>

double x1 = 100, yy1 = 200, x2 = 200, yy2 = 300;
int algo;

void DDA ()
{

    double length = abs(x2 - x1);
    if (abs(yy2 - yy1) > length)
    {
        length = abs(yy2 - yy1);
    }
    double x_increment = (x2 - x1) / length;
    double y_increment = (yy2 - yy1) / length;
    double x = x1, y = yy1;
    x = x + .5;
    y = y + .5;
    for (int i=1; i<=length; i++)
    {
        glBegin(GL_POINTS);
        glVertex2i(trunc(x), trunc(y));
        glEnd();
        x = x + x_increment;
        y = y + y_increment;
    }
    printf("DDA");
}
void Mid_Point ()
{
    int dx = (x2 - x1), dy = (yy2 - yy1);
    int d = 2 * dy - dx;
    int incrE = 2 * dy;
    int incrNE = 2 * (dy - dx);
    int x = x1, y = yy1;
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();

    while (x < x2)
    {
        if (d <= 0)
        {
            d = d + incrE;
        }
        else
        {
            d = d + incrNE;
            y++;
        }
        x++;
        glBegin(GL_POINTS);
        glVertex2i(x, y);
        glEnd();
    }
    printf("Mid Point");
}

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(1.0);
    if(algo == 1)
    {
        DDA();
    }
    else
    {
        Mid_Point();
    }

    glFlush ();
}
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 150);

    algo = 0;
    while (1)
    {
        printf("Choose between DDA(1) or Mid Point(2)\n");
        scanf("%d", &algo);
        if(algo == 1 || algo == 2)
        {
            break;
        }
    }

    glutCreateWindow ("Hello World");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();

    return 0;
}


