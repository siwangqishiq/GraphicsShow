//
//  Render.c
//  Graphics
//
//  Created by  潘易  on 16/1/12.
//  Copyright (c) 2016年 xinlan. All rights reserved.
//

#include "Render.h"

void init()
{
    glClearColor(1,1,1,1);
}


void handleKeyInput(unsigned char key, int x, int y)
{
    if (key == 27)
    {
        exit(0);
    }
}

void drawPoint(int x, int y, const Color color)
{
	float x_value = (float)x;
    float y_value = (float)y;
    //glPointSize(8.0);设置点的大小
    glColor3f(color.r / 255, color.g / 255, color.b / 255);//指定点的颜色
    //计算Opengl坐标
    x_value = 2 * x_value / WIDTH - 1;
    y_value = 2 * y_value / HEIGHT - 1;
    glBegin(GL_POINTS);//开始画点
    //printf("%f   %f",x_value,y_value);
    glVertex3f(x_value, y_value, 0); //绘制点
    glEnd();//结束画点
}

int main_(int argc,char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutInitWindowPosition(400, 200);
    glutCreateWindow("Render Window");
    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeyInput);
    init();
    glutMainLoop();
    return 0;
}
