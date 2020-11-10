// 头文件
#include <iostream>
#include <cstring>


// 顺序栈结构声明
#define MAXSIZE 10                  // 定义栈中元素的最大个数
typedef struct
{
    char data[MAXSIZE];             // 静态数组存放栈中元素
    int top;                        // 栈顶指针
}SqStack;


// 函数声明
void InitStack(SqStack &S);         // 初始化栈

bool StackEmpty(SqStack &S);        // 判断栈是否为空

bool Push(SqStack &S, char x);      // 新元素入栈

bool Pop(SqStack &S, char &x);      // 栈钉元素出栈, 并用x返回

bool bracketCheck(char str[], int length);      // 用顺序栈检查括号是否匹配


// 函数定义
void InitStack(SqStack &S)
{
    for (int i = 0; i < MAXSIZE; i++)
    {
        S.data[i] = 0;
    }

    S.top = -1;
}

bool StackEmpty(SqStack &S)
{
    return (S.top == -1);
}

bool Push(SqStack &S, char x)
{
    S.top++;

    if (S.top > MAXSIZE - 1)
    {
        return false;                       // 栈满
    }
    S.data[S.top] = x;

    return true;
}

bool Pop(SqStack &S, char &x)
{
    if(StackEmpty(S)) return false;          // 栈空

    x = S.data[S.top];
    S.top--;
    return true;
}


bool bracketCheck(char str[], int length)
{
    SqStack S;

    InitStack(S);                            // 初始化一个栈

    for(int i = 0; i < length; i++)
    {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            Push(S, str[i]);                // 检测到左括号, 入栈
        }else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if(StackEmpty(S))               // 扫描到右括号, 且当前栈空
                return false;               // 匹配失败

            char topElem;
            Pop(S, topElem);                // 栈顶元素出栈

            if(str[i] == ')' && topElem != '(')
                return false;
            if(str[i] == ']' && topElem != '[')
                return false;
            if(str[i] == '}' && topElem != '{')
                return false;
        }
    }

    return StackEmpty(S);                   // 检索完全括号后, 栈空说明匹配成功
}


// 检验程序
int main()
{
    char str[10] = "([({})]";

    if (bracketCheck(str, (int)strlen(str)))
    {
        printf("括号匹配成功!");
    }else
    {
        printf("括号匹配失败!");
    }

    return 0;
}