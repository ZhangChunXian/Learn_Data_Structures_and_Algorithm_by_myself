#include <iostream>

// 顺序表的基本操作————插入

// 静态分配数据表结构类型的确立
#define MAXSIZE 10 // 定义最大长度

typedef struct
{
    int data[MAXSIZE]; // 用静态的“数组”存放数据元素
    int length;        // 顺序表的当前长度
} SqList;              // 顺序表的类型定义

// 初始化静态线性表
void InitList(SqList &L)
{
    L.length = 0;

    for (int i = 0; i < MAXSIZE; i++)
    {
        L.data[i] = 0;
    }
}

// 函数实现基本操作：在L的位序i处插入元素e
// 修改ListInsert函数，增加函数的健壮性
bool ListInsert(SqList &L, int i, int e)
{
    if (i < 1 || i > L.length + 1)              // 判断i的范围是否有效
        return false;
    if (L.length >= MAXSIZE)                    // 当前存储空间已满，不能插入
        return false;

    for (int j = L.length; j >= i; j--)         // 将第i个元素及之后的元素后移
        L.data[j] = L.data[j - 1];

    L.data[i - 1] = e;                          // 在位置i处放入e
    L.length++;                                 // 长度加1
}

int main()
{
    SqList L;

    InitList(L);

    /*
    其他代码
    */

    ListInsert(L, 3, 3);
    return 0;
}