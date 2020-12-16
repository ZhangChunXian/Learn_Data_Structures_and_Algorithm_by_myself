//? 头文件
#include <iostream>
using namespace std;


//? 宏定义
#define MAXVERTEXNUM 100    // 图中顶点数目的最大值


//? 全局变量
int indegree[vexnum];       // indegree数组记录当前顶点的入度
int print[vexnum];          // print数组记录拓扑排序序列


//? 数据结构
typedef struct ArcNode {    // 边表结点
    int adjvex;                 // 该弧所指向的顶点的位置
    struct ArcNode *nextarc;    // 指向下一条弧线的指针
    // infoType info;           // 网的边权值
}ArcNode;

typedef struct VNode {       // 顶点表结点
    int data;                   // 顶点信息
    ArcNode *firstarc;          // 指向第一条依附该顶点的弧的指针
}VNode, AdjList[MAXVERTEXNUM];

typedef struct {
    AdjList vertices;         // 邻接表
    int vexnum, arcnum;         // 图的当前顶点数和边数/弧数
}Graph;                         // Graph是以邻接表存储的图类型


//? 函数声明
bool TopologicalSort(Graph G); // 拓扑排序
bool 

//? 函数定义
bool TopologicalSort(Graph G) {
    InitStack(S);               // 初始化栈, 存储入度为0的顶点

    for (int i = 0; i < G.vexnum; i++) {
        if (indegree[i] == 0) {
            push(S, i);         // 将所有入度为0的顶点进栈
        }
    }

    int count = 0;              // 计数, 记录当前已经输出的顶点数

    while(!IsEmpty(S)) {        // 栈不空, 则存在入度为0的顶点
        Pop(S, i);              // 栈顶元素出栈
        print[count++] = i;     // 输出顶点i

        for (p = G.vertices[i].firstarc; p ; p = p->nextarc) {
            // 将所有i指向的顶点入度-1, 并且将入度减为0的顶点压入栈S
            v = p->adjvex;

            if (!(--indegree[V]))
                Push(S, v);         // 入度为零, 则入栈
        }
    }// while

    if (count < G.vexnum) {
        return false;       // 排序失败, 有向图中有回路
    }else {
        return true;        // 拓扑排序成功
    }
}


