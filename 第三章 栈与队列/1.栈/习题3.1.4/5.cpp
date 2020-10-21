#include <iostream>

#define MAXSIZE 10

typedef struct
{
    int stack[MAXSIZE];
    int top[2];                         // top为两个栈顶指针
}stk;

stk s;                                  // a是如上定义的结构类型变量, 为全局变量


void Initstk(stk &a)
{
    s.top[0] = -1;
    s.top[1] = MAXSIZE;
}
// 入栈操作
int push(int i, int x)
{
    // 入栈操作, i为栈号, i=0表示左边的s1栈, i=1表示右边的s2栈, x是入栈元素
    // 入栈成功返回1, 否则返回0
    if (i<0 || i>1)
    {
        exit(0);
    }

    if (s.top[1] - s.top[0] == 1)
    {
        return 0;
    }

    switch(i)
    {
        case 0: s.stack[++s.top[0]] = x; break;
        case 1: s.stack[--s.top[1]] = x;
    }

    return 1;
}

int pop (int i, int &x)
{
    if (i<0 || i>1)
    {
        exit(0);
    }

    if (s.top[0] == -1 || s.top[1] == MAXSIZE)
    {
        return 0;
    }

    switch(i)
    {
        case 0: s.stack[s.top[0]--] = x; break;
        case 1: s.stack[s.top[1]++] = x; break;
    }

    return 1;
}