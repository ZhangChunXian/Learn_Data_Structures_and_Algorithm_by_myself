#include <iostream>
using namespace std;

typedef struct
{
    int data;
    struct LNode *next;
} LNode, *LinkList;

// 初始化一个带头结点的单链表
bool InitList(LinkList &L)
{
    L = (LNode *)malloc(sizeof(LNode));

    if (L == NULL)  // 内存不足, 初始化失败
        return false;

    L->next = NULL; // 养成好习惯，只要是初始化单链表，都加上 L->next == NULL 这句

    return true;
}

LinkList ListHeadInsert(LinkList &L) {
    LNode *s = NULL;

    int x = 0;

    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    cin >> x;

    while (x != 9999) {
        s = (LNode *)malloc(sizeof(LNode));

        s->data = x;
        s->next = L->next;
        L->next = s;
        cin >> x;
    }

    return L;
}
