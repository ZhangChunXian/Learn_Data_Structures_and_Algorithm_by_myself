#include <iostream>
using namespace std;

// 双链表结构体

typedef struct DNode
{
    int data;

    struct DNode *prior, *next;
}DNode, *DLinkList;

// 双链表的初始化（带头结点）

bool InitDLinkList(DLinkList &L)
{
    L = (DNode *)malloc(sizeof(DNode));         // 分配一个头结点

    if(L==NULL) return false;                   // 内存不足，分配失败

    L->prior = NULL;                            // 头结点的 prior 永远指向NULL

    L->next = NULL;                             // 头结点之后暂时没有结点

    return true;
}

// 判断双链表是否为空

bool Verify_Empty_DNode(DLinkList L)
{
    if (L->next == NULL) return true;
    else
        return false;
}

// 双链表的插入

// 在p结点之后插入s结点

bool Insert_Next_DNode(DNode *p, DNode *s)
{
    if(p==NULL || s==NULL)                      // 非法参数
        return false;

    s->next = p->next;                          // 将结点*s插入到结点*p之后
    if (p->next != NULL)
        p->next->prior =s;

    s->prior = p;

    p->next = s;
}

// 双链表的删除
// 删除p的后继结点q

bool Delete_Next_DNode(DNode *p)
{
    if(p==NULL) return false;

    if(p->next == NULL) return false;

    p->next = p->next->next;

    if(p->next->next != NULL)           // q结点不是最后一个结点
        p->next->next->prior = p;

    free(p->next);                      // 释放结点空间

    return true;
}

// 删除整个双链表
void Destory_List(DLinkList &L)
{
    // 循环释放各个数据结点
    while (L->next != NULL)
        Delete_Next_DNode(L);

    free(L);                            // 释放头结点

    L = NULL;                           // 头指针指向NULL
}

// 双链表的遍历
// 后向遍历
while(p!=NULL)
{
    // 对结点p做相应处理，如打印
    p = p->next;
}

// 前向遍历
while (p!=NULL)
{
    // 对结点p做相应处理
    p = p->prior;

}

// 前向遍历（跳过头结点）
while(p->prior!=NULL)
{
    p = p->prior;
}