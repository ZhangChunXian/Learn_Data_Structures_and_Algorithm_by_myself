#include "header.h"

// 共享栈的定义
typedef struct
{
    int data[MAXSIZE];          // 用静态的“数组”存放数据元素
    int top0;                   // 0号栈栈顶指针
    int top1;                   // 1号栈栈顶指针
}ShStack;

// 初始化栈
void InitStack(ShStack &S)
{
    S.top0 = -1;                // 初始化栈顶指针
    S.top1 = MAXSIZE;
}

// 判断栈满的条件: top0 + 1 == top1;