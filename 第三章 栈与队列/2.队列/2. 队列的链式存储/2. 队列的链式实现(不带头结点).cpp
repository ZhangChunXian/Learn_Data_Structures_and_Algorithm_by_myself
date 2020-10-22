


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
    if (Q.front == NULL)
        return true;
    else
        return false;
}
