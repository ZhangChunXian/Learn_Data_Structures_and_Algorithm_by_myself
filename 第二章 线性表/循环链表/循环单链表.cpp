#include <iostream>
typedef struct LNode{               // 定义单链表结点数据类型
    int data;                       // 每个结点存放一个数据元素
    struct LNode *next;             // 指针指向下一个结点
}LNode, *LinkList;

// 初始化一个循环单链表
bool InitList(LinkList &L){
    L = (LNode *)malloc(sizeof(LNode));    // 分配一个头结点
    if(L == NULL) return false;            // 内存不足，分配失败

    L->next = L;                           // 头结点指针指向头结点
    return true;
}

// 判断循环单链表是否为空
bool Verify_Empty_LNode(LinkList L){
    if (L->next == L)   return true;
    else return false;
}

// 判断某一个结点p是否为循环单链表的表尾结点
bool is_Tail(LinkList L, LNode *p){
    if (p->next == L) return true;
    else return false;
}