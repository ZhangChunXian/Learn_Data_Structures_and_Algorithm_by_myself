//? 头文件
#include <iostream>
using namespace std;



//? 二叉链树的数据结构
typedef struct BiTNode
{
    int data;                           // 数据域
    struct TreeNode *lchild, *rchild    // 左右孩子指针
}BiTNode, *BiTree;



//? 