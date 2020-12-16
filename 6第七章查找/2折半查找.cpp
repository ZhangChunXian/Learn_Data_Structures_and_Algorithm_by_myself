//? 头文件
#include <iostream>
using namespace std;


//? 定义数据结构
typedef struct {    // 查找表的顺序结构(顺序表)
    int *elem;       // 动态数组基地址
    int TableLen;   // 表的长度
}SSTable;


//? 函数声明
int Binary_Search(SSTable L, int key);      //折半查找


//? 函数定义
int Binary_Search(SSTable L, int key) {
    int low = 0, high = L.TableLen - 1, mid;

    while(low <= high) {
        mid = (low + high) / 2;

        if (L.elem[mid] == key) {
            return mid;             // 查找成功则返回所在位置
        }else if (L.elem[mid] > key)
            high = mid - 1;         // 从前半部分查找
        else low = mid + 1;         // 从后半部分查找
    }

    return -1;                      // 查找失败, 返回-1
}