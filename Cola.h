#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>
#include "Malla.h"

class Cola
{
public:
	GLfloat angulo;
	Cola() {};
	void DibujarCola(float angulo, int ntorsion1, int ntorsion2, float x, float y, float z);
	~Cola() {};
};

