#include <iostream>

#define INITSIZE 10

typedef struct
{
    int *data;
    int MaxSize;
    int length;
}SeqList;

// 初始化动态顺序表
bool Init_SeqList(SeqList &L)
{
    L.data = (int *)malloc( INITSIZE * sizeof(int));

    if(!L.data) return false;

    L.length = 0;
    L.MaxSize = INITSIZE;
    return true;
}

bool Dynamic_List_Delete(Seqlist &L, int i, int &e)
{
    if (i < 1 || i > L.length)
        return false;

    e = L.data[i - 1];

    for (int j = i; j < L.length; j++)
        L.data[j - 1] = L.data[j];

    L.length--;
    return true;
}