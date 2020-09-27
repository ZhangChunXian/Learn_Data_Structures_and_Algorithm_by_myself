

#include <iostream>
using namespace std;

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;

bool InitList(LinkList &L)
{
    L = (LNode *)malloc(sizeof(LNode));

    if (L == NULL) return false;

    L->next = NULL;                         // 养成好习惯，只要是初始化单链表，都加上 L->next == NULL 这句

    return true;
}

bool ListInsert_to_Head(LinkList &L)
{
    int e;

    scanf("%d", &e);

    while (e != 9999)
    {
    LNode *r = (LNode *)malloc(sizeof(LNode));

    r->next = L->next;

    L->next = r;

    r->data = e;

    scanf("%d", &e);

    }

    return true;
}


