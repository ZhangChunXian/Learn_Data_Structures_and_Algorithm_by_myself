#include "header.h"


bool ListInsert(LinkList &L, int i, int e)
{
    if (i < 1)
        return false;
    if (i == 1)
    {   // 插入第一个结点的操作与其他结点的操作不同
        LNode *s = (LNode *)malloc(sizeof(LNode));
        s->data = e;
        s->next = L;
        L = s;      // 头指针指向头结点
        return true;
    }

    LNode *p;       // 指针p指向当前扫描到的结点
    int j = 1;      // j表示的是当前p指向的是第几个结点
    p = L;          // p指向第一个结点（注意；不是头结点）

    while (p != NULL && j < i-1)
    {               // 循环找到第 i-1 个结点
        p = p->next;
        j++;
    }

    if (p == NULL)   // i值不合法
        return false;

    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;     // 插入成功


}