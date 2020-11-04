#include <iostream>

// 建立链结点数据结构
typedef struct                                      // 链式队列的结点
{
    int data;
    struct LinkNode *next;
}LinkNode;

typedef struct                                      // 链式队列
{
    LinkNode *front, *rear;                         // 队列的对头和队尾指针
}LinkQueue;

/**
 * 带头结点版本
 */
void InitQueue(LinkQueue &Q)
{
    // 初始时, front, rear都指向都结点
    Q.front = Q.rear = (LinkNode *)malloc(sizeof(LinkNode));
    Q.front->next = NULL;
}

void testLinkQueue()
{
    LinkQueue Q;                                    // 声明一个链队列
    InitQueue(Q);                                   // 初始化队列

    // ... 后续操作
}


// 判断队列是否为空
bool isEmpty(LinkQueue Q)
{
    if (Q.front == Q.rear)                          // 也可以用Q.front == NULL 来判断
        return true;
    else
        return false;
}

// 新元素入队(带头结点)
void EnQueue(LinkQueue &Q, int x)
{
    LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));

    s->data = x;

    s->next = NULL;
    Q.rear->next = s;                               // 新结点插入到rear之后
    Q.rear = s;                                     // 修改表尾指针
}

// 对头元素出队(带头结点)
bool DEQueue(LinkQueue &Q, int &x)
{
    if (Q.rear = Q.front)
        return false;                               // 空队列

    LinkNode *p = Q.front->next;
    x = p->data;

    Q.front->next = p->next;                        // 修改头结点
    /**
     * ! 注意考虑特殊情况
     */
    if (Q.rear == p)                                // 此次是最后一个结点出队
    {
        Q.rear = Q.front;                           // 修改rear指针
    }
    free(p);                                        // 修改rear指针
    return true;
}