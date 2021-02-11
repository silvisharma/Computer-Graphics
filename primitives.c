#include<GL/glut.h>

void display()
{
glClear(GL_COLOR_BUFFER_BIT);

	// GL_POINTS 
	glPointSize(5.0);    
	glBegin(GL_POINTS);
	glColor3f(1.0,0.0,1.0);
	glVertex2f(0.0,0.1);
	glVertex2f(0.1,0.2);
	glVertex2f(0.1,0.5);  
	glVertex2f(0,0.4);
	glVertex2f(0,0.6);   
	glEnd();    

	// GL_TRIANGLES
	glBegin(GL_TRIANGLES);          
	glColor3f(0,1, 1); 
	glVertex2f(0.1,-0.6);	
	glColor3f(0.0,1.0,0.0f);
	glVertex2f(0.7,-0.6);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(0.4,-0.1);
	glEnd();
 
	// GL_POLYGON
	glBegin(GL_POLYGON);            
	glColor3f(1.0,1.0,0.0);
	glVertex2f(0.4,0.2);
	glVertex2f(0.6,0.2);
	glVertex2f(0.7,0.4);
	glVertex2f(0.6,0.6);
	glVertex2f(0.4,0.6);
	glVertex2f(0.3,0.4);
	glEnd();
    
    	//GL_LINE_STRIP
	glLineWidth(5.0);      
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(-0.9,-0.2);
	glVertex2f(-0.6,-0.2);
	glVertex2f(-0.9,-0.5);
	glVertex2f(-0.6,-0.5);    
	glEnd();    

	glLineWidth(5.0);    
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(-0.9,-0.2);
	glVertex2f(-0.6,-0.2);
	glVertex2f(-0.9,-0.5);
	glVertex2f(-0.6,-0.5);    
	glEnd();    

	// GL_LINE_LOOP
	glLineWidth(5.0);    
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(-0.4,-0.2);
	glVertex2f(0.0,-0.3);
	glVertex2f(-0.1,-0.5);
	glVertex2f(-0.3,-0.6);    
	glEnd();    
   
   	
	//GL_LINES
	glLineWidth(6.0);    
	glBegin(GL_LINES);
	glColor3f(0.0,1.0,1.0);
	glVertex2f(-0.2,0.1);
	glVertex2f(-0.4,0.4);
	glVertex2f(-0.5,0.1);
	glVertex2f(-0.6,0.5);    
	glVertex2f(-0.7,0.2);
	glVertex2f(-0.8,0.3);     
	glEnd();    
	
	



    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex2f(0.1,-0.2);
    glVertex2f(0.2,-0.3);
    glVertex2f(0.1,-0.3);
    glVertex2f(0.1,-0.4);
    glVertex2f(0.2,-0.5);
    glVertex2f(0.1,-0.7);
    glVertex2f(0.1,-0.3);
    glVertex2f(0.2,-0.4);    
    glEnd();    

//GL_QUAD_STRIP
 glBegin(GL_QUAD_STRIP);
    glColor3f(1,0,0);
    glVertex2f(3, 1);
    glColor3f(0,1,0);
    glVertex2f(2, 0);
    glColor3f(0,0,1);
    glVertex2f(2.5, 0);
    glColor3f(1,0,1);
    glVertex2f(2.3, 1);
    glColor3f(1,1,0);
    glVertex2f(2.5, 2);
    glColor3f(1,0,1);
    glVertex2f(3, 2);
 glEnd();  
    glColor3f(1.0,1.0,1.0);
    glRasterPos2f(-0.3,0.8);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "SILVI");

glFlush();
}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(500,300);
    glutCreateWindow("All primitives");
    glClearColor(0,0,0,1);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


 
