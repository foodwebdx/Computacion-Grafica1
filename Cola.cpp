#include "Cola.h"

void Cola::DibujarCola(float angulo, int ntorsion1, int ntorsion2, float x, float y, float z) {
    glPushMatrix();
    glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
    glTranslatef(0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef(1, 0.8, 1);
    glutSolidCube(1.0);
    glPopMatrix();

    for (int i = 0; i < ntorsion1; i++) {
        glTranslatef(0.5, 0.0, 0.0);
        glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
        glTranslatef(0.5, 0.0, 0.0);
        glPushMatrix();
        glScalef(2, 2, 2);
        glutSolidCube(1.0);
        glPopMatrix();
    }

    glPushMatrix();
    glRotatef((GLfloat)angulo+100, 0.0, 0.0, 1.0);
    glTranslatef(-2.0, 0.0, 0.0);
    glTranslated(0, -1.5, 0.0);
    glScalef(4, 1, 1);
    glutSolidCube(1.0);
    glPopMatrix();

    for (int i = 0; i < ntorsion1; i++) {
        glTranslatef(0.5, 0.0, 0.0);
        glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
        glTranslatef(0.5, 0.0, 0.0);
        glPushMatrix();
        glTranslated(5, 0, 0.0);
        glScalef(2, 2, 2);
        glutSolidCube(1.0);
        glPopMatrix();
    }

    for (int i = 0; i < ntorsion1; i++) {
        glTranslatef(0.5, 0.0, 0.0);
        glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
        glTranslatef(0.5, 0.0, 0.0);
        glPushMatrix();
        glTranslated(10, 0, 0.0);
        glScalef(2, 2, 2);
        glutSolidCube(1.0);
        glPopMatrix();
    }

    for (int i = 0; i < ntorsion1; i++) {
        glTranslatef(0.5, 0.0, 0.0);
        glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
        glTranslatef(0.5, 0.0, 0.0);
        glPushMatrix();
        glTranslated(20, 0.0, 0.0);
        glScalef(2, 2, 2);
        glutSolidCube(1.0);
        glPopMatrix();
    }
    /*
    glPushMatrix();
    glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
    glTranslatef(-2.0, 0.0, 0.0);
    glTranslatef(-4.0, 0.0, 0.0); // Moverse al otro lado del brazo
    glScalef(4, 1, 1);
    glutSolidCube(1.0);
    glPopMatrix();*/

    glPopMatrix();
}

