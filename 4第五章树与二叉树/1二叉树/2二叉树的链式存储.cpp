//? 头文件
#include <iostream>
using namespace std;


//? 二叉树的顺序存储结构定义
// 二叉树的结点(链式存储)
typedef struct BiTNode
{
    int data;                   // 数据域
    struct BiTNode *lchild, *rchild;    // 左右孩子指针
}BiTNode, *BiTree;


//? 函数声明
void Init_BiTree(BiTree &root);           // 初试化一个空树

bool Insert_Root(BiTree &root);          // 插入根节点


//? 函数定义
void Init_BiTree(BiTree &root)           // 初试化一个空树
{
    root = NULL;
}

bool Insert_Root(BiTree &root)           // 插入根节点
{
    root = (BiTree)malloc(sizeof(BiTNode));

    if(root == NULL)    return false;    // 内存不足, 分配失败
    root->data = 1;
    root->lchild = NULL;
    root->rchild = NULL;

    return true;
}

/**
 * @brief 若为插入一个新结点
 * 
 * BiTNode *p = (BiTNode *)malloc(sizeof(BiTNode));
 * p->data = 2;
 * p->lchild = NULL;
 * p->rchild = NULL;
 * root->lchild = p;
 * 
 */

