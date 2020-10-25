
#include <iostream>

/* 不带头结点的版本 */

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
    if (Q.front == NULL)            // 也可以通过Q.rear == NULL来判断
        return true;
    else
        return false;
}
// 新元素入队 (不带头结点)
void EnQueue(LinkQueue &Q, int x)
{
    LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));

    s->data = x;
    s->next = NULL;

    /**
     * ! 不带头结点的队列, 第一个元素入队时需要特别处理
     */
    if (Q.front == NULL)                                    // 在空队列中插入第一个元素
    {
        Q.front = s;                                        // 修改队头队尾指针
        Q.rear = s;
    }else
    {
    Q.rear->next = s;                                       // 新结点插入到rear结点之后
    Q.rear = s;                                             // 修改rear指针
    }
}


// 队头元素出队(不带头结点)
bool DeQueue(LinkQueue &Q, int &x)
{
    if (Q.front == NULL && Q.rear == NULL)
        return false;                                       // 空指针返回错误

    if (Q.front == Q.rear)                                  // 判定是否为最后一个结点
    {
        free(Q.front);
        Q.front = NULL;
        Q.rear = NULL;
        return true;
    }

    LinkNode *p = Q.front;
    x = p->data;
    Q.front = Q.front->next;                                // 修改头结点的next指针
    free(p);
    return true;
}