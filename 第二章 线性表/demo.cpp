#include <iostream>

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;

bool InitLinkList(LinkList &L)
{
    L = (LNode *)malloc(sizeof(LNode));

    if (L == NULL) return false;

    L->next = L;
    return true;
}

bool IsTail(LinkList L, LNode *p)
{
    return (p->next == L);
}