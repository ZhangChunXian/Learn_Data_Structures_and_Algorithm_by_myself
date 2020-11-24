//? 头文件
#include <iostream>
using namespace std;


//? 宏定义
#define MAX_TREE_SIZE 100    // 树中最多结点数



//? 数据结构
// 双亲表示法(顺序存储)
typedef struct              // 树的结点定义
{
    int data;               // 数据元素
    int parent;             // 双亲位置域
}PTNode;

typedef struct              // 树的类型定义
{
    PTNode nodes[MAX_TREE_SIZE];    // 双亲定义
    int n;                          // 结点数
}PTree;