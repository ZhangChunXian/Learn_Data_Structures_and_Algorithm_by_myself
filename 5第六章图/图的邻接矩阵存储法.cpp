//? 头文件
#include <iostream>
using namespace std;



//? 宏定义
#define MAXVERTEXNUM 100                  // 顶点数目的最大值
#define INFINITY 4294967295               // 宏定义常量"无穷"(实际为unsigned int表示整数的最大值)


//? 数据结构
// 不带权的临接矩阵法存储图
typedef struct MGraph
{
    char Vex[MAXVERTEXNUM];               // 顶点表
    int Edge[MAXVERTEXNUM][MAXVERTEXNUM]; // 邻接矩阵, 边表
    int vexnum, archum;                   // 图的当前顶点数和边数/弧数
}MGraph;

// 带权的邻接矩阵法存储图
typedef char VertexType;                  // 顶点的数据类型
typedef int EdgeType;                     // 带权图中边上权值的数据类型

typedef struct {
    VertexType Vex[MAXVERTEXNUM];         // 顶点
    EdgeType Edge[MAXVERTEXNUM][MAXVERTEXNUM];  // 边的权
    int vernum, arcnum;                   // 图的当前结点数和弧的数
}MGraph;
