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

// 动态顺序表

#define INITSIZE 10

typedef struct
{
    int *data;                      // 指示动态分配数组的指针
    int MaxSize;                    // 顺序表的最大容量
    int length;                     // 顺序表的当前长度
}DSqlist;

bool DInitList(DSqlist &L)
{
    L.data = (int *)malloc(INITSIZE * sizeof(DSqlist));

    L.MaxSize = INITSIZE;

    L.length = 0;
}

bool Dfun(DSqlist &L, int &mini_element)
{
    if (L.length == 0 || L.length == 1)
    {
        return false;
    }

    mini_element = L.data[0];
    int mini_index = 0;

    for (int i = 1; i < L.length; i++)
    {
        if (L.data[i] < mini_element)
        {
            mini_element = L.data[i];
            mini_index = i;
        }
    }

    L.data[i] = L.data[L.length - 1];

    L.length--;

    // 以上这么做就行了, 如果纠结于浪费了一个空间的话, 可以用下面的语句
    int *p = L.data;

    L.data = (int *)malloc((L.length) * sizeof(int));

    for (int i = 0; i < L.length; i++)
    {
        L.data[i] = *p[i];
    }

    free(p);
    return false;
}

