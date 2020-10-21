
#define MAXSIZE 10            // 定义队列中元素的最大个数

typedef struct
{
    int data[MAXSIZE];        // 用静态数组存放队列元素
    int front, rear;          // 对头指针和队尾指针
}SqQueue;


// 初始化队列
void InitQueue(SqQueue &Q)
{
    // 初始时 队头队尾指针指向0
    Q.rear = Q.front = 0;
}


// 声明一个队列
void testQueue()
{
    SqQueue Q;                 // 声明一个队列(顺序存储)
    InitQueue;
}

