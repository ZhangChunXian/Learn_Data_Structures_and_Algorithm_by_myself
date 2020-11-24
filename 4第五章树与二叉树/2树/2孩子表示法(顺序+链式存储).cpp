//? 头文件
#include <iostream>
using namespace std;



//? 宏定义
#define MAX_TREE_SIZE 100    // 树中最多结点数



//? 数据结构
struct CTNode
{
    int child;                 // 孩子结点在数组中的位置
    struct CTNode *next;       // 下一个孩子
};


typedef struct
{
    int data;
    struct CTNode *firstChild;  // 第一个孩子
}CTBox;


typedef struct
{
    CTBox nodes[MAX_TREE_SIZE];
    int n, r;                   // 结点数和根的位置
}CTree;