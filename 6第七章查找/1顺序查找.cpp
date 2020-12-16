//? 头文件
#include <iostream>
using namespace std;


//? 定义数据结构
typedef struct {    // 查找表的顺序结构(顺序表)
    int *elem;       // 动态数组基地址
    int TableLen;   // 表的长度
}SSTable;


//? 函数声明
int Search_Seq(SSTable ST, int key);        // 顺序查找, 不到哨兵
int Search_Seq2(SSTable ST, int key);      // 顺序查找, 带哨兵


//? 函数定义
int Search_Seq(SSTable ST, int key){
    int i;
    for(i = 0; i < ST.TableLen && ST.elem[i] != key; ++i);
    // 若查找成功, 则返回元素下标, 查找失败, 则返回-1
    return i == ST.TableLen? -1 : i;
}


int Search_Seq2(SSTable ST, int key) {
    ST.elem[0] = key;             // "哨兵"
    int i;

    for (i = ST.TableLen; ST.elem[i] != key; --i);  // 从后往前找
    return i;                           // 查找成功, 则返回元素下标i, 查找失败, 则返回0
}