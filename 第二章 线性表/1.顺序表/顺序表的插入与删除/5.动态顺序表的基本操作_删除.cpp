#include <iostream>

// 动态顺序表的删除

// 定义动态顺序表的数据类型

#define INITSIZE 10

typedef struct{
    int *data;
    int MaxSize;
    int length;
}SeqList;

// 初始化动态顺序表

bool Init_SeqList(SeqList &L){

    L.data = (int *)malloc(INITSIZE * sizeof(int));

    if(!L.data) return false;                           // 内存不足，分配失败

    L.length = 0;
    L.MaxSize = INITSIZE;
    return true;
}

bool Dynamic_List_Delete(SeqList &L, int i, int &e){
    if( i< 1 || i>L.length ) return false;              // 判断i的范围是否有效

    e = L.data[i-1];

    for(int j=i; j<L.length; j++)
        L.data[j] = L.data[j-1];

    L.length--;
    return true;
}