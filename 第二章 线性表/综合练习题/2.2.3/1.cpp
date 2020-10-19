/*题目:
从顺序表中删除具有最小值的元素(假设唯一), 并由函数返回被删除元素的值. 空出来的位置有最后一个
元素填补, 若顺序表为空则显示错误信息并退出运行*/

#include <iostream>


// 静态顺序表
#define MAXSIZE 10            // 定义最大长度

typedef struct
{
    int data[MAXSIZE];
    int length;               // 顺序表的当前长度
}Sqlist;


void InitList(Sqlist &L)
{
    for (int i = 0; i < MAXSIZE; i++)
    {
        L.data[i] = 0;
    }

    L.length = 0;
}

int fun1(Sqlist &L)
{
    if (L.length == 0 || L.length == 1)
    {
        return 0;
    }

    int min_element = L.data[0];
    int min_element_index = 0;

    for (int i = 1; i < L.length; i++)
    {
        if (L.data[i] < min_element)
        {
            min_element = L.data[i];
            min_element_index = i;
        }
    }

    L.data[min_element_index] = L.data[length - 1];

    L.length--;

    return min_element;

}

// 和标准答案差不多
