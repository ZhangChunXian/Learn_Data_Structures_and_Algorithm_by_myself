#include <iostream>
using namespace std;

// 动态顺序表的按值查找


// 定义动态顺序表数据类型
typedef struct{
    int *data;                      // 指示动态分配数组的指针
    int MaxSize;                    // 顺序表的最大容量
    int length;                     // 顺序表的当前长度
}SeqList;

// 按值查找动态顺序表
int Locate_Element(SeqList L, int e){
    for(int i = 0; i < L.length, i++){
        if(L.data[i] == e)
            return i+1;              // 数组下标为i的元素值为e，其顺序为第i+1个。
    }
    return 0;
}