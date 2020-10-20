

#define MAXSIZE 10            // 定义栈中元素的最大个数

typedef struct                // 单个顺序栈
{
    int data[MAXSIZE];        // 用静态的“数组”存放数据元素
    int top;                  // 栈顶指针
}SqStack;

// 初始化顺序栈
void InitStack(SqStack &s);



void testStack(void);


// 增
bool Push(SqStack &S, int x);

// 删
bool Pop(SqStack &S, int &x);

// 查
bool GetTop(SqStack S, int &x);



