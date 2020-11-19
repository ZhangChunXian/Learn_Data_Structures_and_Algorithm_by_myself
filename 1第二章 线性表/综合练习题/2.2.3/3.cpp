/* 题目:
对于长度为n的顺序表L, 编写一个时间复杂度位O(n), 空间复杂度位O(1)的算法,
该算法删除线性表中所有值为x的数据元素.*/


// 假设已经有了这么一个顺序表L, 长度为n, 即 L.length == n成立


// L为静态顺序表

/*方法一: 用k记录顺序表L中等于x的元素个数, 变扫描L边统计k, 并将不等于x的元
素前移动k个位置,最后修改L的长度*/
void Delete_x(Sqlist &L, int x)
{
    int k = 0;                      // 用k记录第i个顺序表元素之前, 顺序表中等于x的元素个数

    for (int i = 0; i < L.length; i++)
    {
        if(L.data[i] == x)
        {
            k++;
        }else
        {
            L.data[i - k] = L.data[i];             // 当前元素赋值给前k个元素
        }

    }

    L.length = L.length - k;
}

// 方法二 解法一：用k记录顺序表L中不等于x的元素个数（即需要保存的元素个数），边扫描L边统计k，并将不等于x的元素向前移动k个位置，最后修改L的长度。

void Delete_x(Sqlist &L, int x)
{
    int k = 0;                      // 用k记录第i个顺序表元素前不等于x的元素的个数

    for (int i = 0; i < L.length; i++)
    {
        if (L.data[i] != x)
        {
            L.data[k] = L.data[i];
            k++
        }

        L.length = k;
    }
}



// 动态顺序表与静态顺序表差别不大.