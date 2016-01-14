//
//  Render.h
//  Graphics
//
//  Created by  潘易  on 16/1/12.
//  Copyright (c) 2016年 xinlan. All rights reserved.
//

#ifndef __Graphics__Render__
#define __Graphics__Render__

#include <stdlib.h>
#include <gl\glut.h>

//this for OSX
//#include <OpenGL/gl.h>
//#include <OpenGL/glu.h>
//#include <GLUT/glut.h>

#define WIDTH       1000
#define HEIGHT      800

#undef PI
#define PI            3.14159265358979323846

struct _Color{
    int r;
    int g;
    int b;
};
typedef struct _Color Color;

//Color color = {0,0,0};

void drawPoint(int x, int y, const Color color);//draw a point
void init();
void display();
void handleKeyInput(unsigned char key, int x, int y);

#endif /* defined(__Graphics__Render__) */
