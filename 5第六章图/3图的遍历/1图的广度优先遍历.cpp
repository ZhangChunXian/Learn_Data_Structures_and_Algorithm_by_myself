#include <iostream>
using namespace std;



//? 宏定义
#define MAX_VERTEX_NUM 100



//? 全局变量
bool visited[MAX_VERTEX_NUM];



//? 数据结构
// 图的邻接矩阵存储(不带权)
typedef struct MGraph {
    char Vex[MAX_VERTEX_NUM];                   // 顶点表
    int Edge[MAX_VERTEX_NUM][MAX_VERTEX_NUM];   // 邻接矩阵, 边表
    int vexnum, archnum;                        // 图的当前顶点数和边数/弧数
}MGraph;



//? 函数声明
void BFS(MGraph G, int v);                       // 从顶点v出发, 广度优先遍历图G
void BFSTraverse(MGraph G);                      // 对图G进行广度优先遍历



//? 函数定义
void BFS(MGraph G, int v) {                       // 从顶点v出发, 广度优先遍历图G
    visit(v);                    // 访问初始化顶点v
    visited[v] = true;           // 对v做已访问标记

    Enqueue(Q, v);               // 顶点v入队列Q

    while(!isEmpty(Q)) {
        DeQueue(Q, v);           // 顶点v出队列

        for(w = FirstNeighor(G, v); w >= 0, w = NextNeighbor(G, v, w)) {
            // 检测v所有邻接顶点
            if(!visited[w]) {    // w为v的尚未访问的邻接顶点
                visit(w);        // 访问顶点w
                visited[w] = true;// 对w做已访问标记
                EnQueue(Q, w);    // 顶点w入队列
            }// if
        }// while
    }
}


void BFSTraverse(MGraph G) {     // 对图G进行广度优先遍历, 包括非连通图
    int i = 0;
    for (i = 0; i < G.vexnum; ++i) {
        visited[i] = FALSE;      // 访问标记数组初始化
    }

    InitQueue();                 // 初始化辅助队列Q

    for(i = 0; I < G.vexnum; ++i) { // 从零号顶点开始遍历
        if (!visited[i])            // 对每个连通分量调用一次BFS
            BFS(G, i);              // vi为访问过, 从vi开始BFS
    }
}
