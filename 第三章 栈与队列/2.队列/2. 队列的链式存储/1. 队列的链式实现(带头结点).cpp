
#include <iostream>



// 建立链结点数据结构
typedef struct                      // 链式队列的结点
{
    int data;
    struct LinkNode *next;
}LinkNode;

typedef struct                      // 链式队列
{
    LinkNode *front, *rear;         // 队列的对头和队尾指针
}LinkQueue;

/* 带头结点版本 */

// 初始化队列(带头结点)
void InitQueue(LinkQueue &Q)
{
    // 初始时, front, rear都指向头结点
    Q.front = Q.rear = (LinkNode *)malloc(sizeof(LinkNode));
    Q.front ->next = NULL;
}

void testLinkQueue()
{
    LinkQueue Q;                        // 声明一个链队列
    InitQueue(Q);                       // 初始化队列

    // ... 后续操作
}


// 判断队列是否为空
bool IsEmpty(LinkQueue Q)
{
    if (Q.front == Q.rear)
        return true;
    else
        return false;
}



/* 不带头结点的版本 */

// 初始化队列(不带头结点)
void InitQueue(LinkQueue &Q)
{
    // 初始时, front, rear都指向NULL
    Q.front = NULL;
    Q.rear = NULL;
}

// 判断队列是否为空, 不带头结点

bool IsEmpty(LinkQueue Q)
{
    if (Q.front == NULL)
        return true;
    else
        return false;
}


// 新元素入队 (带头结点)
void EnQueue(LinkQueue &Q, int x)
{
    LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));

    s->data = x;

    s->next = NULL;
    Q.rear->next =s;                                        // 新结点插入到rear之后
    Q.rear = s;                                             // 修改表尾指针
}

// 队头元素出队(不带头结点)
bool DeQueue(LinkQueue &Q, int &x)
{
    if (Q.rear = Q.front)
        return false;                                       // 空队

    LinkNode *p = Q.front->next;
    x = p->data;

    Q.front->next = p->next;                                // 修改头结点的next指针
    /**
     * ! 注意考虑特殊情况!
     */
    if (Q.rear == p)                                        // 判定是否为最后一个结点出队
    {
        Q.rear = Q.front;                                   // 修改rear指针
    }
    free(p);                                                // 释放结点空间

    return true;
}