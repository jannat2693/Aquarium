#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>


float p=0.00;


void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);


 glBegin(GL_QUADS); //background
 glColor3f(0.0f, 0.5f, 1.0f);
 glVertex3f(0.0f, 0.05f, 0.0f);
 glVertex3f(1.0f, 0.05f, 0.0f);
 glVertex3f(1.0f, 1.0f, 0.0f);
 glVertex3f(0.0f, 1.0f, 0.0f);
 glEnd(); //End quadrilateral coordinates


 glBegin(GL_TRIANGLES); //tree l
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.03f, 0.05f, 0.0f);
 glVertex3f(0.04f, 0.05f, 0.0f);
 glVertex3f(0.01f, 0.20f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 2
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.04f, 0.05f, 0.0f);
 glVertex3f(0.05f, 0.05f, 0.0f);
 glVertex3f(0.03f, 0.15f, 0.0f);
 glEnd();


 glBegin(GL_TRIANGLES); //tree 3
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.04f, 0.05f, 0.0f);
 glVertex3f(0.05f, 0.05f, 0.0f);
 glVertex3f(0.05f, 0.17f, 0.0f);
 glEnd();


 glBegin(GL_TRIANGLES); //tree 4
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.05f, 0.05f, 0.0f);
 glVertex3f(0.06f, 0.05f, 0.0f);
 glVertex3f(0.07f, 0.15f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 5
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.30f, 0.05f, 0.0f);
 glVertex3f(0.31f, 0.05f, 0.0f);
 glVertex3f(0.29f, 0.12f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 6
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.31f, 0.05f, 0.0f);
 glVertex3f(0.32f, 0.05f, 0.0f);
 glVertex3f(0.31f, 0.15f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 7
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.32f, 0.05f, 0.0f);
 glVertex3f(0.33f, 0.05f, 0.0f);
 glVertex3f(0.33f, 0.14f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 8
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.36f, 0.05f, 0.0f);
 glVertex3f(0.37f, 0.05f, 0.0f);
 glVertex3f(0.34f, 0.18f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 9
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.36f, 0.05f, 0.0f);
 glVertex3f(0.37f, 0.05f, 0.0f);
 glVertex3f(0.37f, 0.12f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 10
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.41f, 0.05f, 0.0f);
 glVertex3f(0.42f, 0.05f, 0.0f);
 glVertex3f(0.39f, 0.10f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 11
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.42f, 0.05f, 0.0f);
 glVertex3f(0.43f, 0.05f, 0.0f);
 glVertex3f(0.41f, 0.14f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 12
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.42f, 0.05f, 0.0f);
 glVertex3f(0.43f, 0.05f, 0.0f);
 glVertex3f(0.43f, 0.13f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 13
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.42f, 0.05f, 0.0f);
 glVertex3f(0.43f, 0.05f, 0.0f);
 glVertex3f(0.45f, 0.15f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 14
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.43f, 0.05f, 0.0f);
 glVertex3f(0.44f, 0.05f, 0.0f);
 glVertex3f(0.47f, 0.10f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 15
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.60f, 0.05f, 0.0f);
 glVertex3f(0.61f, 0.05f, 0.0f);
 glVertex3f(0.61f, 0.14f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 16
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.72f, 0.05f, 0.0f);
 glVertex3f(0.73f, 0.05f, 0.0f);
 glVertex3f(0.70f, 0.15f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 17
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.72f, 0.05f, 0.0f);
 glVertex3f(0.73f, 0.05f, 0.0f);
 glVertex3f(0.73f, 0.11f, 0.0f);
 glEnd();


 glBegin(GL_TRIANGLES); //1st mushroom
 glColor3ub(105, 15, 213);
 glVertex3f(0.01f, 0.21f, 0.0f);
 glVertex3f(0.21f, 0.21f, 0.0f);
 glVertex3f(0.11f, 0.35f, 0.0f);
 glEnd();

    glutPostRedisplay(); //mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.06,0.23,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.11,0.23,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.17,0.23,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.09,0.26,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.11,0.30,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.14,0.25,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

 glBegin(GL_QUADS); ////mushroom piller
 glColor3f(0.0f, 0.1f, 0.0f);
 glVertex3f(0.08f, 0.05f, 0.0f);
 glVertex3f(0.14f, 0.05f, 0.0f);
 glVertex3f(0.12f, 0.21f, 0.0f);
 glVertex3f(0.10f, 0.21f, 0.0f);
 glEnd(); //End quadrilateral coordinates


 glBegin(GL_TRIANGLES); //2nd mushroom
 glColor3ub(255, 0, 0);
 glVertex3f(0.13f, 0.14f, 0.0f);
 glVertex3f(0.21f, 0.14f, 0.0f);
 glVertex3f(0.17f, 0.20f, 0.0f);
 glEnd();


  glBegin(GL_QUADS); // mushroom piller
 glColor3f(0.0f, 0.1f, 0.0f);
 glVertex3f(0.15f, 0.09f, 0.0f);
 glVertex3f(0.19f, 0.09f, 0.0f);
 glVertex3f(0.18f, 0.14f, 0.0f);
 glVertex3f(0.16f, 0.14f, 0.0f);
 glEnd(); //End quadrilateral coordinates

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.16,0.15,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.18,0.17,0.0);
    glutSolidSphere(0.007 ,100,2);
    glPopMatrix();
    glEnd();

 glBegin(GL_TRIANGLES); //3rd mushroom
 glColor3ub(253, 203, 0);
 glVertex3f(0.62f, 0.08f, 0.0f);
 glVertex3f(0.70f, 0.08f, 0.0f);
 glVertex3f(0.66f, 0.14f, 0.0f);
 glEnd();

 glBegin(GL_QUADS); // mushroom piller

 //Trapezoid
 glColor3f(0.0f, 0.1f, 0.0f);
 glVertex3f(0.64f, 0.05f, 0.0f);
 glVertex3f(0.68f, 0.05f, 0.0f);
 glVertex3f(0.67f, 0.08f, 0.0f);
 glVertex3f(0.65f, 0.08f, 0.0f);

 glEnd(); //End quadrilateral coordinates

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.65,0.09,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.67,0.11,0.0);
    glutSolidSphere(0.007 ,100,2);
    glPopMatrix();
    glEnd();

 glBegin(GL_TRIANGLES); //4th mushroom
 glColor3ub(227, 42, 234);
 glVertex3f(0.73f, 0.21f, 0.0f);
 glVertex3f(0.95f, 0.21f, 0.0f);
 glVertex3f(0.84f, 0.35f, 0.0f);
 glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.06,0.23,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.76,0.23,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.81,0.23,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.87,0.23,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.91,0.23,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.80,0.27,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.84,0.26,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.89,0.26,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.83,0.31,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//mushroom circle
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.87,0.29,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

 glBegin(GL_QUADS); //mushroom piller
 glColor3f(0.0f, 0.1f, 0.0f);
 glVertex3f(0.81f, 0.05f, 0.0f);
 glVertex3f(0.87f, 0.05f, 0.0f);
 glVertex3f(0.85f, 0.21f, 0.0f);
 glVertex3f(0.83f, 0.21f, 0.0f);

 glEnd(); //End quadrilateral coordinates

     glutPostRedisplay();//Stone1
    glPushMatrix();
    glColor3ub(131, 20, 0);
    glTranslatef(0.17,0.07,0.0);
    glutSolidSphere(0.03 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(131, 20, 0);
    glTranslatef(0.22,0.08,0.0);
    glutSolidSphere(0.04 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(131, 20, 0);
    glTranslatef(0.26,0.06,0.0);
    glutSolidSphere(0.02 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//Stone 2
    glPushMatrix();
    glColor3ub(131, 20, 0);
    glTranslatef(0.51,0.07,0.0);
    glutSolidSphere(0.04 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(131, 20, 0);
    glTranslatef(0.57,0.06,0.0);
    glutSolidSphere(0.03 ,100,2);
    glPopMatrix();
    glEnd();


    glutPostRedisplay();//Stone 3
    glPushMatrix();
    glColor3ub(131, 20, 0);
    glTranslatef(0.75,0.06,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(131, 20, 0);
    glTranslatef(0.78,0.07,0.0);
    glutSolidSphere(0.03 ,100,2);
    glPopMatrix();
    glEnd();

      //Stone 4
    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(131, 20, 0);
    glTranslatef(0.92,0.08,0.0);
    glutSolidSphere(0.04 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(131, 20, 0);
    glTranslatef(0.97,0.07,0.0);
    glutSolidSphere(0.03 ,100,2);
    glPopMatrix();
    glEnd();

    ////////////
      if(p<=1)
       p=p+.0001;

      else
        p=0.0;
  //1st Fish
 glBegin(GL_TRIANGLES); //fish body
 glColor3f(255, 255, 255);
 glVertex3f(0.24f+p, 0.45f, 0.0f);
 glVertex3f(0.30f+p, 0.40f, 0.0f);
 glVertex3f(0.36f+p, 0.45f, 0.0f);
 glEnd();
  glBegin(GL_TRIANGLES); //fish body
 glColor3ub(254, 71, 194);
 glVertex3f(0.24f+p, 0.45f, 0.0f);
 glVertex3f(0.30f+p, 0.50f, 0.0f);
 glVertex3f(0.36f+p, 0.45f, 0.0f);
 glEnd();



    glutPostRedisplay();//eye
    glPushMatrix();
    glColor3ub(7, 7, 7);
    glTranslatef(0.32+p,0.46,0.0);
    glutSolidSphere(0.005 ,100,2);
    glPopMatrix();
    glEnd();


    glBegin(GL_QUADS);//Tail
    glColor3ub(254, 71, 194);
    glVertex3f(0.20f+p, 0.42f, 0.0f);
    glVertex3f(0.24f+p, 0.45f, 0.0f);
    glVertex3f(0.20f+p, 0.48f, 0.0f);
    glVertex3f(0.21f+p, 0.45f, 0.0f);
    glEnd();

  glBegin(GL_TRIANGLES); //Wings
 glColor3ub(7, 7, 7);
 glVertex3f(0.25f+p, 0.41f, 0.0f);
 glVertex3f(0.28f+p, 0.42f, 0.0f);
 glVertex3f(0.27f+p, 0.43f, 0.0f);
 glEnd();
  glBegin(GL_TRIANGLES); //Wings
 glColor3ub(7, 7, 7);
 glVertex3f(0.25f+p, 0.49f, 0.0f);
 glVertex3f(0.27f+p, 0.47f, 0.0f);
 glVertex3f(0.28f+p, 0.48f, 0.0f);
 glEnd();
  glBegin(GL_TRIANGLES); //Wings
 glColor3ub(7, 7, 7);
 glVertex3f(0.30f+p, 0.43f, 0.0f);
 glVertex3f(0.32f+p, 0.45f, 0.0f);
 glVertex3f(0.31f+p, 0.45f, 0.0f);
 glEnd();


 //2nd Fish
  glBegin(GL_TRIANGLES); //fish body
 glColor3f(255, 255, 255);
 glVertex3f(0.54f-p, 0.58f, 0.0f);
 glVertex3f(0.60f-p, 0.53f, 0.0f);
 glVertex3f(0.66f-p, 0.58f, 0.0f);
 glEnd();
  glBegin(GL_TRIANGLES); //fish body
 glColor3ub(2, 239, 247);
 glVertex3f(0.54f-p, 0.58f, 0.0f);
 glVertex3f(0.60f-p, 0.63f, 0.0f);
 glVertex3f(0.66f-p, 0.58f, 0.0f);
 glEnd();


    glutPostRedisplay();//eye
    glPushMatrix();
    glColor3ub(7, 7, 7);
    glTranslatef(0.57-p,0.59,0.0);
    glutSolidSphere(0.005 ,100,2);
    glPopMatrix();
    glEnd();


    glBegin(GL_QUADS);//Tail
    glColor3ub(2, 239, 247);
    glVertex3f(0.70f-p, 0.55f, 0.0f);
    glVertex3f(0.66f-p, 0.58f, 0.0f);
    glVertex3f(0.70f-p, 0.61f, 0.0f);
    glVertex3f(0.69f-p, 0.58f, 0.0f);
    glEnd();

  glBegin(GL_TRIANGLES); //Wings
 glColor3ub(7, 7, 7);
 glVertex3f(0.57f-p, 0.58f, 0.0f);
 glVertex3f(0.59f-p, 0.56f, 0.0f);
 glVertex3f(0.58f-p, 0.58f, 0.0f);
 glEnd();
  glBegin(GL_TRIANGLES); //Wings
 glColor3ub(7, 7, 7);
 glVertex3f(0.63f-p, 0.60f, 0.0f);
 glVertex3f(0.64f-p, 0.59f, 0.0f);
 glVertex3f(0.65f-p, 0.62f, 0.0f);
 glEnd();
  glBegin(GL_TRIANGLES); //Wings
 glColor3ub(7, 7, 7);
 glVertex3f(0.63f-p, 0.56f, 0.0f);
 glVertex3f(0.65f-p, 0.54f, 0.0f);
 glVertex3f(0.64f-p, 0.57f, 0.0f);
 glEnd();

     glutPostRedisplay();//Bubble 1
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.22,0.32+p,0.0);
    glutSolidSphere(0.02 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.22,0.35+p,0.0);
    glutSolidSphere(0.015 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.22,0.37+p,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.22,0.39+p,0.0);
    glutSolidSphere(0.009 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();//Bubble 2
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.41,0.57+p,0.0);
    glutSolidSphere(0.02 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.41,0.60+p,0.0);
    glutSolidSphere(0.015 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.41,0.62+p,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.41,0.64+p,0.0);
    glutSolidSphere(0.009 ,100,2);
    glPopMatrix();
    glEnd();

        glutPostRedisplay();//Bubble 3
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.48,0.64+p,0.0);
    glutSolidSphere(0.02 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.48,0.67+p,0.0);
    glutSolidSphere(0.015 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.48,0.69+p,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.48,0.71+p,0.0);
    glutSolidSphere(0.009 ,100,2);
    glPopMatrix();
    glEnd();


    glutPostRedisplay();//Bubble 4
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.72,0.32+p,0.0);
    glutSolidSphere(0.02 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.72,0.35+p,0.0);
    glutSolidSphere(0.015 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.72,0.37+p,0.0);
    glutSolidSphere(0.01 ,100,2);
    glPopMatrix();
    glEnd();

    glutPostRedisplay();
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0.72,0.39+p,0.0);
    glutSolidSphere(0.009 ,100,2);
    glPopMatrix();
    glEnd();

 glBegin(GL_TRIANGLES); //tree 18
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.87f, 0.05f, 0.0f);
 glVertex3f(0.88f, 0.05f, 0.0f);
 glVertex3f(0.87f, 0.12f, 0.0f);
 glEnd();

 glBegin(GL_TRIANGLES); //tree 19
 glColor3f(0.0f, 1.0f, 0.0f);
 glVertex3f(0.87f, 0.05f, 0.0f);
 glVertex3f(0.88f, 0.05f, 0.0f);
 glVertex3f(0.92f, 0.17f, 0.0f);
 glEnd();

glBegin(GL_QUADS); //Begin quadrilateral coordinates

 //Trapezoid
 glColor3ub(74, 25, 22);
 glVertex3f(0.00f, 0.0f, 0.0f);
 glVertex3f(1.00f, 0.00f, 0.0f);
 glVertex3f(1.00f, 0.05f, 0.0f);
 glVertex3f(0.00f, 0.05f, 0.0f);
 glEnd(); //End quadrilateral coordinates




glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (900, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Jannatul Ferdous");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
