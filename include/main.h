//main.h
#ifndef _MAIN_H_
#define _MAIN_H_
#include <vector>
#include <GL/glut.h>
#include <iostream>
#include <cstring>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>
#include <deque>
#include <stdlib.h>
using namespace std;

extern bool replay;      //检测是否启动游�?
extern bool over;        //检测游戏是否结�?
extern float squareSize;  //一个单元的大小
extern float xIncrement;     // x����
extern float yIncrement;     // y����
extern int rotation;
extern float* monster1;
extern float* monster2;
extern float* monster3;
extern float* monster4;
extern vector<int> border;    //wall

//障碍物坐�?
extern vector<int> obstaclesTop;
extern vector<int> obstaclesMiddle;
extern vector<int> obstaclesBottom;
extern deque<float> food;
extern vector<vector<bool>> bitmap;//2d picture
extern bool* keyStates;
extern int points;

#endif



