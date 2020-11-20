//? 头文件
#include <iostream>
using namespace std;



//? 二叉树的结点结构
typedef struct BiTNode
{
    int data;                               // 数据域
    struct BiTNode *lchild, *rchild;        // 左右孩子指针
}BiTNode, *BiTree;



//? 函数声明
void visit(BiTree T);                       // 二叉树结点的访问
void PreOrder(BiTree T);                    // 二叉树的先序遍历
void InOrder(BiTree T);                     // 二叉树的中序遍历




//? 函数定义
void PreOrder(BiTree T)                     // 二叉树的先后遍历
{
    if(T != NULL)
    {
        visit(T);                           // 访问根节点
        PreOrder(T->lchild);                // 递归遍历左子树
        PreOrder(T->rchild);                // 递归遍历右子树
    }
}

void InOrder(BiTree T)                      // 二叉树的中序遍历
{
    if(T != NULL)
    {
        InOrder(T->lchild);                 // 递归遍历左子树
        visit(T);                           // 访问根节点
        InOrder(T->rchild);                 // 递归遍历右子树
    }
}