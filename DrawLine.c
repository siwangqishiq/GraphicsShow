//
//  DrawLine.c
//  Graphics
//
//  Created by  潘易  on 16/1/12.
//  Copyright (c) 2016年 xinlan. All rights reserved.
//

//
//  main.c
//  Graphics
//
//  Created by  潘易  on 16/1/12.
//  Copyright (c) 2016年 xinlan. All rights reserved.
//  直线的点截式绘制
//

#include <stdio.h>
#include "Render.h"

int main(int argc,char **argv)
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

Color color={255,0,0};//画笔颜色

//点截式绘制直线
void drawLinePointcut(float x1,float y1,float x2,float y2,const Color color)
{
    int start_x = (int)(x1 + 0.5f);
    int end_x = (int)(x2 + 0.5f);
    float value_y;
    int x,y;
    // y  = k * x + b;
    float k = (y2 - y1) / (x2 - x1);//斜率k
    float b = y1 - k * x1;// b值
    
    for(x = start_x; x<= end_x; x++)
    {
        value_y = k * x + b;
        y = (int)(value_y + 0.5f);
        drawPoint(x,y,color);
    }//end for x
    
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //TODO
//    for( i = 0;i<100;i++)
//    {
//        drawPoint(WIDTH/2, HEIGHT/2, color);
//    }
//    drawPoint(WIDTH/2, HEIGHT/2, color);
    
    drawLinePointcut(100,100,900,460,color);
    glutSwapBuffers();
    //glutPostRedisplay();
}


