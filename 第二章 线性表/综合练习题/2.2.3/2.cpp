/* 题目:
2. 设计一个高效算法, 将顺序表L的所有元素置逆, 要求算法的空间复杂度位O(1)
*/


// 静态顺序表

#include <iostream>
#include <string>

#define MAXSIZE 10            // 定义最大长度

typedef struct
{
    int data[MAXSIZE];
    int length;
}SqList;

void InitList(Sqlist &L)
{
    for (int i = 0; i < L.length; i++)
    {
        L.data[i] = 0;
    }

    L.length = 0;
}


  /* 第一次写的时候的代码, 不符合空间复杂度的题意*/
bool Sfun(Sqlist &L)
{
    int copy_data[MAXSIZE];

    strcpy(copy_data, L.data);

    for (int i = 0; i < L.length; i++)
    {
        L.data[i] = copy_data[L.length - 1 - i];
    }

    return true;
}


// 标准答案

void Reverse(SqList &L)
{
    int temp;

    for (int i = 0; i < L.length; i++)
    {
        temp = L.data[i];                       // 临时变量
        L.data[i] = L.data[L.length - i - 1];
        L.data[L.length - i - 1] = temp;
    }
}

// 动态顺序表的操作与静态顺序表无异