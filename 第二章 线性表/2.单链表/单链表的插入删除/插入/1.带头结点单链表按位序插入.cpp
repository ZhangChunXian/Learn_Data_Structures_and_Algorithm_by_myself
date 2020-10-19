#include <iostream>
using namespace std;

// 定义单链表数据类型
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;

// 初始化一个带头结点的空单链表
bool InitList(LinkList &L)
{
    L = (LNode *)malloc(sizeof(LNode));             // 分配一个头结点

    if (L == NULL)                                  // 内存不足, 分配失败
        return false;

    L->next = NULL;                                 // 头结点之后暂时没有节点
    return true;
}

// 在表L的第i个位置上插入指定元素e

bool ListInsert(LinkList &L, int i, int e)
{
    if (i < 1)      return false;

    LNode *p;                           // 指针p指向当前扫描到的结点
    int j = 0;                          // j代表当前p指向的是第几个结点
    p = L;                              // L指向头结点，头结点是第零个结点(不放数据)

    while (p != NULL && j < i - 1)      // 循环找到第i-1个结点
    {
        p = p->next;
        j++;
    }

    if ( p == NULL)                     // i值不合法
        return false;

    LNode *s = (LNode *)malloc(sizeof(LNode));

    s->next = p->next;
    p->next = s;                        // 将结点s连到p之后

    s.data = e;

    return true;                        // 插入成功


}