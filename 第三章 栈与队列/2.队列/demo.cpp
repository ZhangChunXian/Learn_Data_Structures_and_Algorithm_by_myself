#include <iostream>

typedef struct LNode
{
    int data;
    struct LNode *next;
}LinkNode;

typedef struct
{
    struct LNode *front, *rear;
}LinkQueue;

void InitQueue(LinkQueue &Q)
{
    Q.front = Q.rear = (LNode *)malloc(sizeof(LNode));
    Q.front->next = NULL;
}

void testLinkQueue()
{
    LinkQueue Q;
    InitQueue(&Q);
}


bool IsEmpty(LinkQueue Q)
{
    if (Q.front == Q.rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void EnQueue(LinkQueue &Q, int x)
{
    LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));

    s->data = x;

    s->next = NULL;

    Q.rear->next = s;

    Q.rear = s;
}

bool DeQueue(LinkQueue &Q, int &x)
{
    if (Q.front == Q.rear)
        return false;

    LinkNode *p = Q.front->next;;

    x = p->data;

    Q.front->next = p->next;
    /**
     * ! 考虑特殊情况!
     */
    // 如果是最后一个结点出队
    if (Q.rear == p)
        Q.rear = Q.front;

    free(p);
    return true;

}