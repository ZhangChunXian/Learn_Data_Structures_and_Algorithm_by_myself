//? 头文件
#include <iostream>
using namespace std;



//? 宏定义
#define MAXVERTEXNUM 100                  // 顶点数目的最大值
#define INFINITY 4294967295               // 宏定义常量"无穷"(实际为unsigned int表示整数的最大值)




//? 数据结构
// 带权的邻接矩阵法存储图
typedef char VertexType;                  // 顶点的数据类型
typedef int EdgeType;                     // 带权图中边上权值的数据类型

// 图的邻接表表示法

// 图的"边/弧"
typedef struct ArcNode {
    int adjvex;             // 边/弧指向哪个结点
    struct ArcNode *next;   // 指向下一条弧的指针
}ArcNode;

// 图的顶点数据结构
typedef struct VNode {
    VertexType data;        // 顶点信息
    ArcNode *first;         // 第一条边/弧
}VNode, AdjList[MAXVERTEXNUM];

// 用邻接表存储的图
typedef struct {
    AdjList vertices;
    int vexnum, arcnum;     // 图的当前顶点数和边数/弧数
}ALGraph;



