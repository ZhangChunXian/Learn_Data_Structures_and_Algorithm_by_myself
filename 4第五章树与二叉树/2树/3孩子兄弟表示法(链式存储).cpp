//? 头文件
#include <iostream>
using namespace std;


//? 宏定义
#define MAX_TREE_SIZE 100    // 树中最多结点数



//? 数据结构
// 数的存储 孩子兄弟表示法, 可以用将数转化为二叉树
typedef struct CSNode
{
    int data;               // 数据域
    struct CSNode *firstchild, *nextsibling; // 第一个孩子和右兄弟指针
}CSNode, *CSTree;