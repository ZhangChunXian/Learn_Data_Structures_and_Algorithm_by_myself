#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct LNode                //定义单链表的结点类型
{
    int data;                       //每个节点存放一个数据元素
    struct LNode *next;             //指针指向下一个节点
}LNode, *Linklist;

// 初始化一个单链表（带头结点）
bool InitList(LinkList &L)
{
    L = (LNode *)malloc(sizeof(LNode)); //分配一个头结点

    if(L == NULL)   return false;       //内存不足，分配失败

    L->next = NULL;                     //头结点之后暂时还没有节点

    return true;
}

void test()
{
    LinkList L;

    InitList(L);
}

//在第i个位置插入元素e（带头结点）
bool ListInsert(LinkList &L, int i, int e)
{
    if (i<1)    return false;           // i值不合法

    LNode *p;                           // 指针p指向当前扫描到的结点

    int j=0;                            // j代表当前p指向的是第几个结点

    p = L;                              // L指向头结点，头结点是第零个结点（不存数据）

    while (p != NULL && j<i-1)
    {
        p=p->next;
        j++;
    }

    if (p == NULL)                      // i值不合法
        return false;

    LNode *s = (LNode *)malloc(sizeof(LNode));

    s->data = e;

    s->next = p->next;

    p->next = s;                        // 将结点s连到p之后

    return true;
}

/*
尾插法建立单链表；

初始化单链表

设置变量length记录链表长度

while循环{
    每次取一个数据元素e;
    ListInsert(L, length+1, e) 插到尾部;
    lenght++;
}
*/

// 设置一个表尾指针r来降低算法的时间复杂度

LinkList List_TailInsert(LinkList &L)   // 正向建立单链表
{
    int x;
    L = (LinkList)malloc(sizeof(LNode));

    LNode *s, *r=L;                     // r为表尾指针

    scanf("%d", &x);                    // 输入结点的值

    while(x!=9999){                     // 输入9999表示结束
        s = (LNode *)malloc(sizeof(LNode));

        s->data = x;

        r->next = s;

        r = s;                          // r指向新的表尾结点

        scanf("%d", &x);
    }

    r->next = NULL;                     // 尾结点指针为空

    return L;
}