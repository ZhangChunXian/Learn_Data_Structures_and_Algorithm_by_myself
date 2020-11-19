#include <iostream>

typedef struct LNode
{
    char data;
    struct LNode *next;
} LNode, *LinkList;

bool verify_symmetry(LNode *L, int n)
{
    int i;
    char s[n/2];            // s为字符栈

    LNode *p = L->next;            // P是链表的工作指针, 指向待处理的当前元素

    for (i = 0; i < n/2; i++)
    {
        s[i] = p->data;
        p = p->next;
    }

    i--;                     // 恢复最后的i值
    if (n%2 == 1)            // 若n是奇数, 则后移过中心结点
    {
        p = p->next;
    }

    while (p != NULL && s[i] == p->data)        // 检查是否中心对称
    {
        i--;
        p = p->next;
    }

    return (i == -1);
}