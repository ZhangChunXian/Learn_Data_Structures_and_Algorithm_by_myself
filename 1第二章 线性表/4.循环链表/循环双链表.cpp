#include <iostream>


// 定义双链表数据类型
typedef struct DNode {
    int data;
    struct DNode *prior, *next;
}DNode, *DLinkList;

// 函数声明
// 初始化一个循环双链表
bool Init_DList(DLinkList &L);
// 判断一个双链表是否为空
bool Verify_Empty_DNode(DLinkList L);
// 判断某一个结点p是否为尾结点
bool Verify_Last_DNode(DNode *p, DNode *L);

// 初始化一个循环双链表
bool Init_DList(DLinkList &L){
    L = (DNode *)malloc(sizeof(DNode));            // 分配一个头结点

    if (L == NULL) return false;                   // 内存不足，分配失败

    L->next = L;
    L->prior = L;                                  // 头结点的prior指向头结点
    return true;
}

// 判断一个双链表是否为空
bool Verify_Empty_DNode(DLinkList L){
    if (L->next == L)    return true;
    else return false;
}

// 判断某一个结点p是否为尾结点
bool Verify_Last_DNode(DNode *p, DNode *L){
    if (p->next == L)    return true;
    else return false;
}