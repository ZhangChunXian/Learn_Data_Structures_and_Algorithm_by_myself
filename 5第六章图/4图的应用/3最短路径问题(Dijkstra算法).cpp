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
}Graph;

int maxDepth(TreeNode *root) {
    return root == NULL ? 0 : max(maxDepth(root -> left), maxDepth(root -> right)) + 1;
}