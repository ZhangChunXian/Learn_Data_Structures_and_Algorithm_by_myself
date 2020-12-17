//? 头文件
#include <iostream>
using namespace std;


//? 定义数据结构
// 索引表
typedef struct {
    int maxValue;
    int low, high;
}Index;

// 顺序表存储实际元素
int list[100];

