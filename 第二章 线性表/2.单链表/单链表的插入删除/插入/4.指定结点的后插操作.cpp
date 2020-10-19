#include "header.h"



// 后插操作：在p结点之后插入元素
bool InsertNextNode (LNode *p, int e){
    if (p==NULL)
        return false;
    LNode *s = (LNode *)malloc(sizeof(LNode));

    if (s==NULL)        // 内存分配失败
        return false;

    s->next = e;        // 用结点s保存数据元素e
    s->next = p->next;
    p->next = s;        // 将结点s连到p之后
    return true;
}