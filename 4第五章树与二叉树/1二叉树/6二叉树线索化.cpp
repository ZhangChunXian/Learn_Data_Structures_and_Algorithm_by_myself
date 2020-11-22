//? 头文件
#include <iostream>
using namespace std;


//? 全局变量
/**
 * @brief 一些辅助全局变量, 用于查找结点p的前驱
 */
BiTNode *p;                                 // p指向目标结点
BiTNode *pre = NULL;                        // pre指向当前访问结束的前驱
BiTNode *final = NULL;                      // final用于记录最终结果


//? 定义数据结构
// 定义非线索二叉树的数据结构
typedef struct BiTNode
{
    int data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

// 定义线索二叉树的数据结构
typedef struct ThreadNode
{
    int data;
    struct ThreadNode *lchild, *rchild;
    int ltag, rtag;
}ThreadNode, *ThreadTree;


//? 函数声明
void InOrder(BiTree T);                 // 中序遍历

void visit(BiTNode *q);                 // 访问结点q

void InThread(ThreadTree T);            // 中序遍历二叉树, 一边遍历一边线索化


//? 函数定义
void InOrder(BiTree T)
{
    if (T != NULL)
    {
        InOrder(T->lchild);             // 递归遍历左子树
        visit(T);                       // 访问跟结点
        InOrder(T->rchild);             // 递归遍历右子树
    }
}

void visit(BiTNode *q)                  // 访问结点q
{
    if (q == p)                         // 当前访问结点刚好是结点p
    {
        final = pre;                    // 找到b的前驱
    }else
    {
        pre = q;                        // pre指向当前访问的结点
    }
}

