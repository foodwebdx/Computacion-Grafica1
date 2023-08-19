#pragma once



#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>
#include "Malla.h"



class Malla {
public:
    Malla() {};
    void DibujarMalla(float x, float y, float z);
    ~Malla() {};
};