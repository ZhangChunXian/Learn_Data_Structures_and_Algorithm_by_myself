

#include <stdlib.h>
#include <stdio.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;

struct LNode *p = (struct LNode *) malloc(sizeof(struct LNode));  
//增加一个新的结点：在内存中申请一个结点所需的空间

// 不带头结点的单链表

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;

// 初始化一个空的单链表
bool InitList(LinkList &L){
    L = Null;           //空表，暂时还没有任何结点
    return true;
}

void test(){
    LinkList L;

    InitList(L)
}

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;

//初始化一个单链表（带结点）
bool InitList(LinkList &L) {
    L = (LNode *)malloc(sizeof(LNode));   //分配一个头结点
    if (L == NULL)                        //内存不足，分配失败
        return false;
    L->next = NULL;                       //头结点之后暂时还没有结点
    return true;
}

void test(){
    LinkList L;

    InitList(L);
}

