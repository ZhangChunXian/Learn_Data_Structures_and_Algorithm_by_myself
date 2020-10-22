
#define MAXSIZE 10 // 定义队列中元素的最大个数

typedef struct
{
    int data[MAXSIZE]; // 用静态数组存放队列元素
    int front, rear;   // 对头指针和队尾指针
} SqQueue;

// 初始化队列
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


// 判断队列是否为空

bool QueueEmpty(SqQueue Q)
{
    if (Q.rear == Q.front)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// 在队尾增加元素, 第一次增加元素时队列是空队列
bool EnQueue(SqQueue &Q, int x)
{
    if ((Q.rear + 1) % MAXSIZE == Q.front) // 队列已满, 返回false
    {
        return false;
    }

    Q.data[Q.rear] = x;              // 将x插入队尾
    Q.rear = (Q.rear + 1) % MAXSIZE; // 队尾指针后移
}

// 循环队列, 出队操作
// 出队(删除一个对头元素, 并用x返回)
bool DeQueue(SqQueue &Q, int &x)
{
    if (Q.rear == Q.front)
        return false; // 队空则报错

    x = Q.data[Q.front];
    Q.front = (Q.front + 1) % MAXSIZE;
    return true;
}

//  获得对头元素的值, 用x返回
bool GetHead(SqQueue Q, int &x)
{
    if (Q.rear == Q.front)
        return false; // 队空则报错

    x = Q.data[Q.front];
    return true;
}

// 队列的元素个数 (rear + MAXSIZE - front) % MAXSIZE

