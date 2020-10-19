#include <iostream>

/* 题目:
4.从有序顺序表中删除其值在给定值s与t之间（要求s<t)的所有元素，如果s或t不合
理或顺序表为空，则显示出错信息并退出运行*/

// 静态顺序表
// 正好是第五题的标准答案
bool fun(Sqlist &L, int s, int t)
{
    if (L.length == 0 || s >= t)
    {
        return false;
    }

    int k = 0;                              // k用来记录在s与t之间的元素的个数

    for (int i = 0; i < L.length; i++)
    {
        if (L.data[i] >= s && L.data[i] <= t)
        {
            k++;
        }else
        {
            L.data[i-k] = L.data[i];
        }
    }
    L.length = L.length - k;
    return true;
}


// 标准答案
/*注意：本题与上一题的区别。因为是有序表，所以删除的元素必然是相连的整体。
算法思想：先寻找值大于等于s的第一个元素（第一个删除的元素），然后寻找值大于t的第
个元素（最后一个删除的元素的下一个元素），要将这段元素删除，只需直接将后面的元素前移*/

 bool Del_s_t2(Sqlist &L, int s, int t)
 {
     // 删除有序顺序表L中值在定值s与t之间的所有元素
     int i, j;
     
     if (s >= t || L.length == 0)
        return false;

    for(i=0; i < L.length && L.data[i] < s; i++);       // 寻找值大于等于s的第一个元素

    if (i >= L.length)
        return false;                                  

    for (j = i; j < L.length && L.data[j] <=t; j++)      // 寻找值大于t的第一个元素

    for (; j < L.length; i++, j++)
        L.data[i] = L.data[j];                           // 前移, 填补被删元素位置

    L.length = i;
    return true;
 }


 // 动态顺序表与静态顺序表基本一致
