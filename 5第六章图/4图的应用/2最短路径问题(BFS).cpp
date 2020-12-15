//? 头文件
#include <iostream>
using namespace std;



//? 宏定义
#define MAXVERTEXNUM 100                  // 顶点数目的最大值
#define MAX_VERTEX_NUM 100

//? 数据结构
// 不带权的临接矩阵法存储图
typedef struct MGraph
{
    char Vex[MAXVERTEXNUM];               // 顶点表
    int Edge[MAXVERTEXNUM][MAXVERTEXNUM]; // 邻接矩阵, 边表
    int vexnum, archum;                   // 图的当前顶点数和边数/弧数
}Graph;

bool visited[MAX_VERTEX_NUM];        // 访问标记数组, 初试都为false



//? 函数声明
void BFS(Graph G, int v);           // 广度优先遍历, 从顶点v出发, 广度优先遍历图G
void BFS_MIN_Distance(Graph G, int u);  // 用广度优先遍历求出顶点u到其他顶点的最短路径



//? 函数定义
void BFS(Graph G, int v) {          // 从顶点v出发, 广度优先遍历图G
    visit(v);       // 访问初试顶点v
    visit[v] = true;              // 对v做已访问标记
    Enqueue(Q, v);                // 顶点v入队列Q

    while(!isEmpty(Q)) {
        Dequeue(Q, &u);            // 顶点v出队列

        for(w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v, w)) {
            // 检测v所有邻接点
            if(!visited[w]) {   // w为v的尚未访问的邻接结点
                visit(w);       // 访问顶点w
                visited[w] = true; // 对w做已访问标记
                EnQueue(Q, W);     // 顶点v入队列
            }// if
        }
    }// while
}

void BFS_MIN_Distance(Graph G, int u) {
    // d[i]表示从u到i结点的最短路径
    for(int i = 0; i < G.vexnum; i++) {
        d[i] = -1;      // 初始化最短路径长度
        path[i] = -1;   // 最短路径从哪个顶点过来
    }

    d[u] = 0;
    visited[u] = true;

    EnQueue(Q, u);
    while(!isEmpty(Q)) {                // BFS算法主过程
        DeQueue(Q, u);                  // 对头元素u出队

        for(w = FirstNeighbor(G, u); w >= 0; w = NextNeighbor(G, u, w)) {
            if(!visited[w]) {   // w为u的尚未访问的邻接结点
                d[w] = d[u] + 1;    // 路径长度加1
                path[w] = u;        // 最短路径应从u到w
                visited[w] = true;  // 设已访问标记
                EnQueue(Q, w);      // 顶点w入队
            }// if
        }
    }// while
}