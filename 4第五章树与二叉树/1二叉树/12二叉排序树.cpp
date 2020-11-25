//? 头文件
#include <iostream>
using namespace std;



//? 数据结构
// 二叉排序树数据结构
typedef struct BSTNode
{
    int  key;
    struct BSTNode *lchild, *rchild;
}BSTNode, *BSTree;



//? 函数声明
// 在二叉排序树中查找值为key的结点(非递归)
BSTNode *BST_Search(BSTree T, int key);
// 在二叉排序树中查找值为key的结点(递归实现)
BSTNode *BSTSearch(BSTree T, int key);
// 在二叉排序树插入关键字为k的新结点(递归实现)
int BST_Insert(BSTree &T, int k);
// 在二叉排序树插入关键字为k的新节点(非递归实现)
int BSTInsert(BSTree &T, int k);
// 按照str[]中的关键字序列建立起二叉排序树
void Creat_BST(BSTree &T, int str[], int n);



//? 函数定义
//在二叉排序树中查找值为key的结点(非递归)
// 最坏空间复杂度O(1)
BSTNode *BST_Search(BSTree T, int key)
{
    while(T != NULL && key != T->key)   // 若树空或等于根结点, 则结束循环
    {
        if(key < T->key)
        {
            T = T->lchild;
        }else
        {
            T = T->rchild;
        }
    }

    return T;
}

// 在二叉排序树中查找值为key的结点(递归实现)
// 最坏空间复杂度 O(h), h为二叉排序树的高度
BSTNode *BSTSearch(BSTree T, int key)
{
    if (T == NULL)
        return NULL;    // 查找失败

    if (key == T->key)
    {
        return T;       // 查找成功
    }else if (key < T->key)
    {
        return BSTSearch(T->lchild, key);   // 在左子树中找
    }else
    {
        return BSTSearch(T->rchild, key);   // 在右子树中找
    }
}

// 在二叉排序树插入关键字为k的新结点(递归实现)
int BST_Insert(BSTree &T, int k)
{
    if (T == NULL)  // 原树为空, 新插入的结点为空结点
    {
        T = (BSTree)malloc(sizeof(BSTNode));
        T->key = k;
        T->lchild = T->rchild = NULL;
        return 1;   // 返回1, 插入成功
    }
    else if(k == T->key)    // 树中存在相同关键字的结点, 插入失败
        return 0;
    else if(k < T->key)     // 插入到T的左子树
    {
        return BST_Insert(T->lchild, k);
    }else
    {
        return BST_Insert(T->rchild, k);
    }
}

// 在二叉排序树插入关键字为k的新节点(非递归实现)
int BSTInsert(BSTree &T, int k)
{
    while(T != NULL && k != T->key)
    {
        if (k < T->key)
        {
            T = T->lchild;
        }else
        {
            T = T->rchild;
        }
    }

    if (T == NULL)
    {
        T = (BSTNode *) malloc(sizeof(BSTNode));
        T->key = k;
        T->lchild = NULL;
        T->rchild = NULL;
        return 1;
    }else if (k == T->key)
    {
        return 0;
    }
}

// 按照str[]中的关键字序列建立二叉排序树
void Creat_BST(BSTree &T, int str[], int n)
{
    T = NULL;   // 初始时T为空树
    int i = 0;

    while(i < n)    // 依次将每个关键字插入到二叉排序树中
    {
        BST_Insert(T, str[i]);
        i++;
    }
}