// 前插操作： 在p结点之前插入元素 e

struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;

bool InsertPriorNode (LNode *p, int e)
{
    if(p==NUll) return false;

    LNode *s = (LNode *)malloc(sizeof(LNode));

    if (s==NULL) return false;

    s->next = p->next;
    p->next = s;            // 新结点 s 连到 p 之后
    s->data = p->data;
    p->data = e;
    return true;

}