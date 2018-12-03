#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>

using namespace std;

float red = 0.0;
float blue = 0.0;
float _angle1 = 30.0f;
float path = -0.45;

///Initializes 3D rendering
void initRendering()
{
	glEnable(GL_DEPTH_TEST);
}
///Called when the window is resized
void handleResize(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

void target (void)
{
    glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0.0, 0.3, 0.0);
        glRotatef(_angle1, 0.0, 0.0, 1.0);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/50 ;
            float r=0.15;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
            glColor3f(red, 0.0, 0.0);
            if (red < 1.0)
            {
                red += 1.0 / 360.0;
            }
        }
        glEnd();
    glPopMatrix();
}

void projectile (void)
{
    glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0.0, -0.5, 0.0);
        glRotatef(_angle1, 0.0, 0.0, 1.0);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/50 ;
            float r=0.05;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
            glColor3f(0.0, 0.0, blue);
            if (blue < 1.0)
            {
                blue += 1.0 / 360.0;
            }
        }
        glEnd();
    glPopMatrix();

    glPushMatrix();
        glColor3f(0.0, 1.0, 0.0);
        glTranslatef(0.0, -0.45, 0.0);
        glBegin(GL_LINES);
            glVertex2f(0.0, 0.0);
            glVertex2f(0.0, 0.15);
        glEnd();
    glPopMatrix();
}

void fire(void)
{
    glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0.0, path, 0.0);
        glRotatef(_angle1, 0.0, 0.0, 1.0);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/50 ;
            float r=0.05;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
            glColor3f(0.0, 0.0, blue);
            if (blue < 1.0)
            {
                blue += 1.0 / 360.0;
            }
        }
        glEnd();
    glPopMatrix();

    glPushMatrix();
        glColor3f(0.0, 1.0, 0.0);
        glTranslatef(0.0, path + 0.05, 0.0);
        glBegin(GL_LINES);
            glVertex2f(0.0, 0.0);
            glVertex2f(0.0, 0.15);
        glEnd();
    glPopMatrix();
}

void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity(); ///Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

    target();
    projectile();
    fire();

	glutSwapBuffers();
}

void update(int value)
{
	_angle1 += 2.0f;
	if (_angle1 > 360)
    {
		_angle1 -= 360;
	}
	if (path < -0.06)
    {
        path += 0.01;
    }

	glutPostRedisplay(); ///Tell GLUT that the display has changed

	///Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}

void burst (int value)
{
    fire();
    printf("burst");
    path = -0.45;
    glutTimerFunc(2000, burst, 0);
}

void mouse(int button, int state, int x, int y)
{
   if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
   {
        fire();
        path = -0.45;
   }
}

int main(int argc, char** argv)
{
	///Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(800, 800);

	///Create the window
	glutCreateWindow("Transformation");
	initRendering();

	///Set handler functions
	glutDisplayFunc(drawScene);
	glutReshapeFunc(handleResize);

	glutTimerFunc(25, update, 0); ///Add a timer
	//glutTimerFunc(25, burst, 0);
	glutMouseFunc(mouse);

	glutMainLoop();
	return 0;
}
