#include <iostream>

#define MAXSIZE 10

typedef struct
{
    int data[MAXSIZE];
    int front, rear;
    /*tag为0表示执行删除操作, 为1表示插入操作
    队满条件:
    front == rear && tag == 1
    队空条件:
    front == rear && tag == 0*/
    int tag;
}SqQueue;

void InitQueue(SqQueue &Q)
{
    // 初始时 队头队尾指针指向0
    Q.rear = Q.front = 0;
}

// 声明一个队列
void testQueue()
{
    SqQueue Q; // 声明一个队列(顺序存储)
    InitQueue(Q);
}

// 在队尾增加元素, 第一次增加元素时队列是空队列
bool EnQueue(SqQueue &Q, int x)
{
    if (Q.front == Q.rear && Q.tag == 1) // 队列已满, 返回false
    {
        return false;
    }

    Q.data[Q.rear] = x;              // 将x插入队尾
    Q.rear = (Q.rear + 1) % MAXSIZE; // 队尾指针后移
    Q.tag = 1;
    return true;
}

// 出队(删除一个对头元素, 并用x返回)
bool DeQueue(SqQueue &Q, int &x)
{
    if (Q.rear == Q.front && Q.tag == 0)
        return false; // 队空则报错

    x = Q.data[Q.front];
    Q.front = (Q.front + 1) % MAXSIZE;
    Q.tag = 0;
    return true;
}