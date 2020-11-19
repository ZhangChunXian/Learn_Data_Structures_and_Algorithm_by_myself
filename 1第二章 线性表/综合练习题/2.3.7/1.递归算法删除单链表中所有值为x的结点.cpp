// 递归算法, 删除不带头结点的单链表L中所有值为x的结点

#include <iostream>

typedef struct
{
    int data;
    LNode *next;
}LNode, *LinkList;


/**
 * !不会~~~~(>_<)~~~~
 */
void Del_X_recursion(LinkList &L, int x)
{
    if (L == NULL) return;                  // 递归出口return;

    if (L->data != x)                       // 若L所指结点的值不为x
    {
        Del_X_recursion(L->next, x);        // 递归调用
        return;                             // 递归出口return
    }

    // if (L->data == x)                    // 若L所指向结点的值为x
    LNode *p;                               // p指向待删除结点
    p = L;
    L = L->next;
    delete p;
    Del_X_recursion(L, x);
}