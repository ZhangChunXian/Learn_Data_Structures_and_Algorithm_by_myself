#include <iostream>
using namespace std;



//? 宏定义
#define MAX_VERTEX_NUM 100



//? 全局变量
bool visited[MAX_VERTEX_NUM];                   // 访问标记数组, 初试都为false



//? 数据结构
// 图的邻接矩阵存储(不带权)
typedef struct MGraph {
    char Vex[MAX_VERTEX_NUM];                   // 顶点表
    int Edge[MAX_VERTEX_NUM][MAX_VERTEX_NUM];   // 邻接矩阵, 边表
    int vexnum, archnum;                        // 图的当前顶点数和边数/弧数
}Graph;

// 定义数的顺序存储数据结构, 只适合存储完全二叉树
struct TreeNode
{
    int value;              // 树结点中的数据元素
    bool isEmpty;           // 结点是否为空
};



//? 函数声明
void PreOrder(TreeNode *R);     // 树的先根遍历

void DFS(Graph G, int v);       // 连通图的深度优先遍历

void DEFTraverse(Graph G);      //  对整个图的深度优先遍历


//? 函数定义
void PreOrder(TreeNode *R) {            // 图的先根遍历
    if (R != NULL) {
        visit(R);           // 访问根结点

        while(R还有下一个子树T) {
            PreOrder(T);            // 先根遍历下一棵子树
        }
    }
}


//! 深度优先遍历, 缺点为如果为非连通图, 则无法遍历完所有结点
void DFS(Graph G, int v) {          // 从顶点v出发, 深度优先遍历图G
    visit(v);
    visited[v] = true;              // 对v做已访问标记

    for(w = FirstNeighor(G, v); w >= 0; w = NextNeighor(G, v, w)) {
        if (!visited[w]) {          // w为u尚未访问的邻接结点
            DFS(G, w);
        }       // if
    }
}

void DFSTraverse(Graph G) {         // 对整个图G进行深度优先遍历
    for(v = 0; v < G.vexnum; ++v) {
        visited[v] = false;         // 初始化已访问标记数据
    }
    for (v = 0; v < G.vexnum; ++v) {// 从v = 0开始遍历
        if(!visited[v]) {
            DFS(G, v);
        }
    }
}