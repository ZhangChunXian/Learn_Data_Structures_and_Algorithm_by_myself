#include <iostream>
using namespace std;

// 顺序表的基本操作————删除

// 静态分配数据表结构类型的确立
#define MAXSIZE 10                      // 定义最大长度

typedef struct{
    int data[MAXSIZE];                  // 用静态的“数组”存放数据元素
    int length;                         // 顺序表的当前长度
}SqList;                                // 顺序表的类型定义

// 初始化静态线性表
void InitList(SqList &L){
    L.length = 0;

    for (int i = 0; i <MAXSIZE; i++){
        L.data[i] = 0;
    }
}

// 线性表的删除操作
bool ListDelete(SqList &L, int i, int &e){
    if(i<1 || i>L.length) return false;    // 判断i的范围是否有效

    e = L.data[i-1];                       // 将被删除的元素赋值给e

    for(int j=i; j<L.length(); j++)
        L.data[j-1] = L.data[j];

    L.length--;                            // 线性表长度减1
    return true;
}

int main(){
    SqList L;
    InitList(L);
    // 此处省略插入几个元素的代码

    int e = 0;                             // 用变量e把删除的元素“带回来”

    if(ListDelete(L, 3, e))
        printf("已删除第3个元素，删除元素值为=%d\n", e);
    else
        printf("位序i不合法，删除失败\n");
    return 0;
}


