#include <iostream>

typedef struct
{
    int data;
    LNode *next;
}LNode, *LinkList;

// 递归方法
void fun1(LinkList &L, int x)
{
    if (L == NULL) return;

    if (L->next != NULL && L->data != x)
    {
        fun1(L->next, x);
    }

    LNode *p = L;
    L = L->next;

    delete p;
    fun1(L, x);
    return;
}

// 非递归方法
void Del_X_1(LinkList &L, int x)
{
    if (L == NULL) return;

    LNode *p = L->next, *pre = L, *q;      // 置p和pre的初始值

    while (p != NULL)
    {
        if (p->data == x)
        {
            q = p;                          // q指向该结点
            p = p->next;
            pre->next = p;                  // 删除*q结点
            free(q);                        // 释放*q结点的空间
        }
        else
        {
            pre = p;
            p = p->next;
        }
    }
}