// 顺序表的按位查找


#include <iostream>
using namespace std;

#define INITSIZE 10                 // 顺序表的初始长度

// 定义动态顺序表数据类型
typedef struct{
    int *data;                      // 指示动态分配数组的指针
    int MaxSize;                    // 顺序表的最大容量
    int length;                     // 顺序表的当前长度
}SeqList;                           // 顺序表的类型定义(动态分配方式)

int GetElement_from_Dynamic_SeqList(SeqList &L, int i){
    if ( i > 0 && i <= L.length)  return L.data[i-1];
}

