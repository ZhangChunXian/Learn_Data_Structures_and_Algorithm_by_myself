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
void visit(BiTree T);                       // 访问一个结点, 并打印字符
void PreOrder(BiTree T);                    // 二叉树的先序遍历
void InOrder(BiTree T);                     // 二叉树的中序遍历
void PostOrder(BiTree T);                   // 二叉树的后序遍历
void LevelOrder(BiTree T);                  // 二叉树的层序遍历
int treeDepth(BiTree T);                    // 求树的深度, 二叉树的遍历的应用

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

void PostOrder(BiTree T)                    // 二叉树的后续遍历
{
    if(T != NULL)
    {
        InOrder(T->lchild);                 // 递归遍历左子树
        InOrder(T->rchild);                 // 递归遍历右子树
        visit(T);                           // 访问根节点
    }
}

void visit(BiTNode *p)                      // 访问一个结点: 打印字符
{
    printf("%c", p->data);
}

int treeDepth(BiTree T)                     // 求树的深度
{
    if (T == NULL) return 0;
    else
    {
        int l = treeDepth(T->lchild);
        int r = treeDepth(T->rchild);

        // 树的深度 = Max(左子树深度, 右子树深度) + 1;
        return l > r ? l + 1 : r + 1;
    }
}



//? 层序遍历所需的链式队列结点
typedef struct LinkNode
{
    BiTNode *data;
    struct LinkNode *next;
}LinkNode;

typedef struct
{
    LinkNode *front, *rear;
}LinkQueue;


void LevelOrder(BiTree T)                   // 二叉树的层序遍历
{
    LinkQueue Q;
    InitQueue(Q);                           // 初始化辅助队列
    BiTree p;
    EnQueue(Q, T);                          // 将根节点入队

    while(!IsEmpty(Q))                      // 队列不空则循环
    {
        DeQueue(Q, p);                      // 对头结点出队
        visit(T);                           // 访问出队结点

        if(p->lchild != NULL)
            EnQueue(Q, p->lchild);          // 左孩子入队
        if(p->rchild != NULL)
            EnQueue(Q, p->rchild);          // 右孩子入队
    }
}

