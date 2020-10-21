#include "header.h"

typedef struct                // 单个顺序栈
{
    int data[MAXSIZE];        // 用静态的“数组”存放数据元素
    int top;                  // 栈顶指针
}SqStack;

// 初始化顺序栈
void InitStack(SqStack &s)
{
    S.top = -1;                // 初始化栈顶指针
}



void testStack()
{
    SqStack S;                  // 声明一个顺序栈(分配空间)
    InitStack(S);
}


// 进栈操作
bool Push(SqStack &S, int x)
{
    if (S.top == MAXSIZE - 1)    // 栈满, 报错
        return false;

    S.top = S.top + 1;          // 栈顶指针的索引先+1
    S.data[S.top] = x;          // 新元素入栈

    /* 上面两步等价于
    S.data[++S.top] = x;
    */
    return true;
}

// 出栈操作
bool Pop(SqStack &S, int &x)
{
    if (S.top == -1)               // 栈空, 报错
        return false;

    x = S.data[S.top];             // 栈顶元素先出栈
    S.top--;                       // 指针再减1

    /*上面两步等价于
    x = S.data[S.top--];
    */

    return true;
}

// 读取栈顶元素
bool GetTop(SqStack S, int &x)
{
    if (S.top == -1)                // 栈空, 报错
        return false;

    x = S.data[S.top];              // x记录栈顶元素

    return true;
}