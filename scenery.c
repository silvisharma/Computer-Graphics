#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
#include<math.h>

void init()
{
	glClearColor(0.360, 0.847, 1, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,670,-360,800);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	int x, y, temp_int;
	float temp;

	//Road
	glColor3f(0.211, 0.211, 0.211);
	glBegin(GL_POLYGON);
	glVertex2i(0, 0); 
	glVertex2i(800, 0); 
	glVertex2i(800,150);
	glVertex2i(0, 300);
	glEnd();
	
	//Road Diversion
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(20,65); 
	glVertex2i(100,65); 
	glVertex2i(100,80); 
	glVertex2i(20,80);
	glEnd();
	
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(120,65);
	glVertex2i(200,65); 
	glVertex2i(200,80); 
	glVertex2i(120,80);
	glEnd();
	
	glColor3f(1,1,1);
	glBegin(GL_POLYGON); 
	glVertex2i(220,65); 
	glVertex2i(300,65); 
	glVertex2i(300,80); 
	glVertex2i(220,80);
	glEnd();
	
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(320,65); 
	glVertex2i(400,65); 
	glVertex2i(400,80);
	glVertex2i(320,80);
	glEnd();
	
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(420,65);	
	glVertex2i(500,65);	
	glVertex2i(500,80);	
	glVertex2i(420,80);
	glEnd();
	
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(520,65);
	glVertex2i(600,65);	
	glVertex2i(600,80);	
	glVertex2i(520,80);
	glEnd();
	
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(620,65);	
	glVertex2i(680,65); 
	glVertex2i(680,80); 
	glVertex2i(620,80);
	glEnd();
	
	//Down Hills
	glColor3f(0.27,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(0,420); 
	glVertex2i(700,420); 
	glVertex2i(700,530); 
	glVertex2i(0,530);
	glEnd();

	//Hills
	glColor3f(0.27,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(200, 530);
	glVertex2i(350, 530);
	glVertex2i(275, 620);
	glEnd();
	glColor3f(0.27,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(0, 530); 
	glVertex2i(200, 530);
	glVertex2i(100, 660);
	glEnd();
	glColor3f(0.27,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(350, 530); 
	glVertex2i(600, 530); 
	glVertex2i(475, 680);
	glEnd();
	glColor3f(0.27,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(600, 530); glVertex2i(700, 530); glVertex2i(650, 575);
	glEnd();

	//Grass
	glColor3f(0,1,0);
	glBegin(GL_POLYGON);
	glVertex2i(0, 150); 
	glVertex2i(700,150); 
	glVertex2i(700,420); 
	glVertex2i(0,420);
	glEnd();
	
	// Hut front
	glColor3f(0.62,0.37, 0.62);
	glBegin(GL_POLYGON);
	glVertex2i(200, 150);
	glVertex2i(360, 150);	
	glVertex2i(360, 370);	
	glVertex2i(200, 370);
	glEnd();

	// Hut side
	glColor3f(0.91, 0.76, 0.65);
	glBegin(GL_POLYGON);
  	glVertex2i(360, 150); 
  	glVertex2i(600, 150); 
  	glVertex2i(600, 370); 
  	glVertex2i(360, 370);
	glEnd();

	// Hut triangle
	glColor3f(0.84, 0.74, 0.84);
	glBegin(GL_POLYGON);
	glVertex2i(200,370); 
	glVertex2i(360,370); 
	glVertex2i(280,500);
	glEnd();

	//Hut top
	glColor3f(0.85, 0.53, 0.10);
	glBegin(GL_POLYGON);
	glVertex2i(360, 370); glVertex2i(600, 370); glVertex2i(520, 500); glVertex2i(280, 500);
	glEnd();

	// Gate
	glColor3f(0.90, 0.91, 0.98);
	glBegin(GL_POLYGON);
	glVertex2i(250,150);	glVertex2i(310,150);	glVertex2i(310,270);	glVertex2i(250,270);
	glEnd();

	//window
	glColor3f(0.60,0,0.12);
	glBegin(GL_POLYGON);
	glVertex2i(430,200); 
	glVertex2i(530,200); 
	glVertex2i(530,300); 
	glVertex2i(430,300);
	glEnd();

	//lines
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(474,200); 
	glVertex2i(478,200); 
	glVertex2i(478,300); 
	glVertex2i(474,300);
	glEnd();
	
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(484,200); 
	glVertex2i(488,200); 
	glVertex2i(488,300); 
	glVertex2i(484,300);
	glEnd();

	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(430,252); 
	glVertex2i(530,252); 
	glVertex2i(530,256); 
	glVertex2i(430,256);
	glEnd();
	
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(480,500); 
	glVertex2i(510,500); 
	glVertex2i(510,530); 
	glVertex2i(480,530);
	glEnd();
	
	
	glFlush();
}

void onclick(int button, int state, int x, int y) //Mouse Event
{
if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) 
{
glClearColor(0.2,0.2,0.4,1);
glutPostRedisplay();
}
else if(button == GLUT_RIGHT_BUTTON && state == GLUT_UP)
{
glClearColor(0,0,0,1);
glutPostRedisplay();
}

}
void onclick1(unsigned char key,int x,int y) //Keyboard Event
{
if(key=='b'){
glColor3f(0,1,1);
glRasterPos2f(3.0,-8.8);
glutBitmapString(GLUT_BITMAP_HELVETICA_18, "SILVI");
glFlush();
}
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(700, 700);
	glutCreateWindow("Scenery");

	init();
	glutDisplayFunc(display);
	glutMouseFunc(onclick);
	glutKeyboardFunc(onclick1);
	glutMainLoop();
	return 0;
}
