#include <iostream>

// 动态顺序表的基本操作_插入

// 定义动态顺序表数据类型

#define INITSIZE 10

#define INITSIZE 10                 // 顺序表的初始长度
typedef struct{
    int *data;                      // 指示动态分配数组的指针
    int MaxSize;                    // 顺序表的最大容量
    int length;                     // 顺序表的当前长度
}SeqList;                           // 顺序表的定义类型（动态分配方式）

// 初始化动态顺序表
bool InitList(SeqList &L){
    L.data = (int *)malloc(INITSIZE * sizeof(int));

    if(!L.data) return false;

    L.length = 0;
    L.MaxSize = INITSIZE;
    return true;
}

// 增加动态数组的长度
void Increase_Size(SeqList &L, int len){        // len为新增长度
    int *p = L.data;

    L.data = (int *)malloc((L.MaxSize+len)*sizeof(int));

    for(int i=0; i<L.length; i++){
        L.data[i] = p[i];                       // 将数据复制到新区域
    }
    L.MaxSize = L.MaxSize + len;                // 顺序表最大长度增加 len
    free(p);                                    // 释放原来的内存空间
}

// 动态顺序表的插入
bool Insert_SeqList(SeqList &L, int i, int e){
    // 插入操作一般默认为头插法
    if(i<1 || i> L.length+1) return false;         // 下标i值不合法

    int *p = L.data;

    L.data = (int *)malloc((L.length + 1) * sizeof(int));

    if(!L.data) return false;                     // 内存分配失败
    for(int j=0; j<i-1 ; j++)
        L.data[j] = p[j];

    L.data[i-1] = e;

    for(int j=i; j< L.length+1 ; j++)
        L.data[j] = p[j-1];

    L.length++;

    return true;
}

