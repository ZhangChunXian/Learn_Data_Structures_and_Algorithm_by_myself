//? 头文件
#include <iostream>
using namespace std;



//? 宏定义
#define MAXVERTEXNUM 100                 // 顶点数目的最大值



//? 数据结构
typedef struct MGraph
{
    char Vex[MAXVERTEXNUM];               // 顶点表
    int Edge[MAXVERTEXNUM][MAXVERTEXNUM]; // 邻接矩阵, 边表
    int vexnum, archum;                   // 图的当前顶点数和边数/弧数
}MGraph;
