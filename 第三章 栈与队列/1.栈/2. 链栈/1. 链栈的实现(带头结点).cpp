#include <iostream>

typedef struct Linknode
{
    int data;              // 数据域
    struct Linknode *next; // 指针域
} * LiStack;               // 链栈类型定义

/* 链栈为空的状态
lst->next == NULL */

// 链栈的初始化
void initStack(LiStack &lst)
{
    lst = (LiStack)malloc(sizeof(Linknode)); // 申请一个头结点的内存空间
    lst->next = NULL;
}

// 判断栈空
bool isEmpty(LiStack lst)
{
    if (lst->next == NULL)
        return false;
    else
        return true;
}

// 元素进栈
void push(LiStack &lst, int x)
{
    LiStack p;
    p = (LiStack)malloc(sizeof(Linknode));  // 为进栈元素申请结点空间
    p->next = NULL;                         // 每当申请新节点, 要将新节点的指针域设为NULL

    /* 以下三句就是带头结点的链表的头插法 */
    p->data = x;
    p->next = lst->next;
    lst->next = p;
}

// 元素出栈
bool pop (LiStack lst, int &x)
{
    if (lst->next == NULL)                  // 栈空则不能出栈, 返回0
        return false;

    x = (lst->next)->data;

    lst->next = lst->next->next;

    free (lst->next);

    return true;
}
