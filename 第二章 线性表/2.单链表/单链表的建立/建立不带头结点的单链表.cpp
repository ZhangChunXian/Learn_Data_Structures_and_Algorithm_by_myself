#include <iostream>
using namespace std;

typedef struct LNode            // 定义单链表数据类型
{
    int data;                   // 每个节点存放一个数据类型
    struct LNode *next;         // 指针指向下一个节点
}LNode, *LinkList;


// 初始化一个空的单链表
bool InitList(LinkList &L){
    L = NULL;                   // 空表, 暂时没有任何结点, 防止脏数据
    return true;
}

void test()
{
    LinkList L;                 // 声明一个指向单链表的指针

    // 初始化一个单链表
    InitList(L);
    // 后续代码
}

// 判断单链表是否为空
bool Empty(LinkList L)
{
    if (L == NULL)
        return true;
    else
        return false;

}