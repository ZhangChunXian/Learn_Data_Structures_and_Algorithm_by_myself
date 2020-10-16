#include <iostream>

#define INITSIZE 10 // 顺序表的初始长度
typedef struct
{
    int *data;   // 指示动态分配数组的指针
    int MaxSize; // 顺序表的最大容量
    int length;  // 顺序表的当前长度
} SeqList;       // 顺序表的定义类型（动态分配方式）

// 初始化顺序表
void InitList(SeqList &L)
{
    // 用 malloc 函数申请一片连续的存储空间
    L.data = (int *)malloc(INITSIZE * sizeof(int));
    L.length = 0;
    L.MaxSize = INITSIZE;
}

// 增加动态数组的长度
void Increase_Size(SeqList &L, int len)
{ // len为新增长度
    int *p = L.data;

    L.data = (int *)malloc((L.MaxSize + len) * sizeof(int));

    for (int i = 0; i < L.length; i++)
    {
        L.data[i] = p[i]; // 将数据复制到新区域
    }
    L.MaxSize = L.MaxSize + len; // 顺序表最大长度增加 len
    free(p);                     // 释放原来的内存空间
}

int main()
{
    SeqList L;   // 声明一个顺序表
    InitList(L); // 初始化顺序表
    // 。。。往顺序表中随便插入几个元素。。。
    Increase_Size(L, 5);

    return 0;
}