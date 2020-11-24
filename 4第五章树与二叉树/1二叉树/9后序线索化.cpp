//? 头文件
#include <iostream>
using namespace std;


//? 定义数据结构
// 定义线索二叉树的数据结构
typedef struct ThreadNode
{
    int data;
    struct ThreadNode *lchild, *rchild;
    int ltag, rtag;     // 左右线索标志
}ThreadNode, *ThreadTree;



//? 全局变量
// 全局变量pre, 指向当前访问结点的前驱
ThreadNode *pre = NULL;



//? 函数声明
// 前序定义二叉树, 一边遍历一边线索化
void PostThread(ThreadTree T);

void visit(ThreadNode *q);

// 中序线索化二叉树T
void CreatePostThread(ThreadNode T);



//? 函数定义
void PostThread(ThreadTree T)
{
    if(T != NULL)
    {
        if(T->ltag == 0)        // lchild不是前驱结点
        {
            PostThread(T->lchild);
        }

        if(T->rtag == 0) // rchild不是前驱结点
        {
            PostThread(T->rchild);
        }
        visit(T);               // 访问根节点
    }
}

void visit(ThreadNode *q)
{
    if(q->rchild == NULL)   // 左子树为空, 则建立前驱结点
    {
        q->lchild = pre;
        q->ltag = 1;
    }

    if(pre != NULL && pre->rchild == NULL)  // 右子树为空, 则建立后继结点
    {
        pre->rchild = q;         // 建立前驱结点的后续线索
        pre->rtag = 1;
    }

    pre = q;
}



//! 前序线索化
void CreatePostThread(ThreadTree T)   // 中序线索化二叉树
{
    pre = NULL;       // pre被初始化为NULL

    if(T != NULL)
    {
        PostThread(T);

        if(pre->rchild == NULL)
        {
            pre->rtag = 1;                    // 处理遍历后的最后一个结点
        }
    }
}