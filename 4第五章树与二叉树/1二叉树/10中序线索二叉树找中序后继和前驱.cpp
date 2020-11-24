//? 头文件
#include <iostream>
using namespace std;


//? 全局变量
// 全局变量 pre, 指向当前访问结点的前驱
ThreadNode *pre = NULL;



//? 定义数据结构
// 定义线索二叉树的数据结构
typedef struct ThreadNode
{
    int data;
    struct ThreadNode *lchild, *rchild;
    int ltag, rtag;                     // 左右线索标志
}ThreadNode, *ThreadTree;



//? 函数声明
// 中序定义二叉树, 一边遍历一边线索化
void InThread(ThreadTree T);

void visit(ThreadNode *q);
// 中序线索化二叉树T
void CreateInThread(ThreadNode T);

/**
 * ! @brief 中序线索二叉树找中序后继
 */
// 找到以p为根的子树中, 第一个被中序遍历的结点
ThreadNode *Firstnode(ThreadNode *p);
// 在中序线索二叉树中找到结点p的后继结点
ThreadNode *Nextnode(ThreadNode *p);
// 对中序线索二叉树进行中序遍历(利用线索实现的非递归算法)
void Inorder(ThreadNode *T);

/**
 * ! @brief 中序线索二叉树找中序前驱
 */
// 找到以p为根的子树中, 最后一个被中序遍历的结点
ThreadNode *Lastnode(ThreadNode *p);
// 在中序线索二叉树中找到结点p的前驱结点
ThreadNode *Prenode(ThreadNode *p);
// 对中序线索二叉树进行逆向中序遍历
void RevInorder(ThreadNode *T);



//? 函数定义
void InThread(ThreadTree T)
{
    if (T != NULL)
    {
        if (T->ltag == 0)                   // lchild不是前驱结点
        {
            InThread(T->lchild);
        }
        visit(T);                           // 访问根节点
        if (T->rtag == 0)                   // rchild不是前驱结点
        {
            InThread(T->rchild);
        }
    }
}


void visit(ThreadNode *q)
{
    if (q->lchild == NULL)  // 左子树为空, 则建立前驱结点
    {
        q->lchild = pre;
        q->ltag = 1;
    }

    if(pre != NULL && pre->rchild == NULL)  // 右子树为空, 则建立后继结点
    {
        pre->rchild = q;                    // 建立前驱结点的后继线索
        pre->rtag = 1;
    }

    pre = q;
}


// 中序线索化
void CreateInThread(ThreadTree T)           // 中序线索化二叉树T
{
    pre = NULL;                             // pre被初始化为NULL

    if(T != NULL)
    {
        InThread(T);                        // 中序线索化二叉树

        if (pre->rchild == NULL)
        {
            pre->rtag = 1;                  // 处理遍历后的最后一个结点
        }
    }
}

/**
 * ! @brief 中序线索二叉树找中序后继
 */

//! 找到以p为根的子树中, 第一个被中序遍历的结点
ThreadNode *Firstnode(ThreadNode *p)
{
    // 循环找到最左下结点(不一定是叶结点)
    while(p->ltag == 0)
    {
        p = p->lchild;
    }

    return p;
}


//! 在中序线索二叉树中找到结点p的后继结点
ThreadNode *Nextnode(ThreadNode *p)
{
    // 右子树中最左下结点
    if(p->rtag == 0)
    {
        return Firstnode(p->rchild);
    }
    else
    {
        return p->rchild;                   // rtag == 1直接返回后继结点
    }
}


//! 对中序线索二叉树进行中序遍历(利用线索实现的非递归算法), 空间复杂度O(1)
void Inorder(ThreadNode *T)
{
    for(ThreadNode *p = Firstnode(T); p != NULL; p = Nextnode(p))
    {
        visit(p);
    }
}


/**
 * ! @brief 中序线索二叉树找中序前驱
 */

// 找到以p为根的子树中, 最后一个被中序遍历的结点
ThreadNode *Lastnode(ThreadNode *p)
{
    // 循环找到最右下结点(不一定是叶结点)
    while(p->rtag == 0)
    {
        p = p->rchild;
    }

    return p;
}


// 在中序线索二叉树中找到结点p的前驱结点
ThreadNode *Prenode(ThreadNode *p)
{
    // 左子树最右下结点
    if(p->ltag == 0)
    {
        return Lastnode(p->lchild);
    }else
    {
        return p->lchild;
    }
}


// 对中序线索二叉树进行逆向中序遍历
void RevInorder(ThreadNode *T)
{
    for(ThreadNode *p = Lastnode(T); p != NULL; p = Prenode(p))
    {
        visit(p);
    }
}
