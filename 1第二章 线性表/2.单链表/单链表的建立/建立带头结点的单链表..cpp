#include <iostream>
using namespace std;

typedef struct LNode                    // 定义单链表结点类型
{
    int data;                           // 每个节点存放一个数据类型
    struct LNode *next;                 // 指针指向下一个节点
}LNode, *LinkList;

// 初始化一个单链表 (带头结点)
bool InitList(LinkList &L)
{
    L = (LNode *)malloc(sizeof(LNode)); // 分配一个头结点

    if (L == NULL)                      // 内存不足, 分配失败
        return false;

    L->next = NULL;                     // 头结点之后暂时没有节点
    return true;
}

void test()
{
    LinkList L;                         // 声明一个执行单链表的空表

    // 初始化一个空表
    InitList(L);
    
}

