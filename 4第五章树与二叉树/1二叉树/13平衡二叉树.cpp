//? 头文件
#include <iostream>
using namespace std;



//? 数据结构
// 平衡二叉树结点
typedef struct AVLNode
{
    int key;                // 数据域;
    int balance;            // 平衡因子
    struct AVLNode *lchild, *rchild;
}AVLNode, *AVLTree;