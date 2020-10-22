
#define MAXSIZE 10              // 定义队列中元素的最大个数

typedef struct
{
    int data[MAXSIZE];          // 用静态数组存放队列元素
    int front, rear;            // 对头指针和队尾指针
}SqQueue;


// 声明队列
void testQueue(SqQueue &Q)
{
    // 初始时, 对头指针和队尾指针指向0
    Q.rear = Q.front = 0;
}

// 