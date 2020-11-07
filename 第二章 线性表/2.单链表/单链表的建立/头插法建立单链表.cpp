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

bool ListInsert_to_Head(LinkList &L)
{
    int e = 0;

    scanf("%d", &e);

    while (e != 9999)   // 9999只是作为终止输入的数字, 没有其他特殊含义, 其他数字也可以
    {
        LNode *r = (LNode *)malloc(sizeof(LNode));

        r->next = L->next;

        L->next = r;

        r->data = e;

        scanf("%d", &e);
    }

    return true;
}
