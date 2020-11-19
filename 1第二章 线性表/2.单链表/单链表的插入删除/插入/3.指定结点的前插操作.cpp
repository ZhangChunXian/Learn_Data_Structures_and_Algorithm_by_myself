// 前插操作： 在p结点之前插入元素 e
#include "header.h"

bool InsertPriorNode(LNode *p, int e)
{
    if (p == NULL)
        return false;

    LNode *s = (LNode *)malloc(sizeof(LNode));

    if (s == NULL)
        return false;

    s->next = p->next;
    p->next = s; // 新结点 s 连到 p 之后
    s->data = p->data;
    p->data = e;
    return true;
}


// 前插操作: 在p结点之前插入结点 s
bool InsertPriorNode2 (LNode *p, LNode *s)
{
    if (p == NULL || s == NULL) return false;

    s->next = p->next;
    p->next =s;                                 // s连到p之后

    int temp = p->data;
    p->data = s->data;
    s->data = temp;

    return true;
}