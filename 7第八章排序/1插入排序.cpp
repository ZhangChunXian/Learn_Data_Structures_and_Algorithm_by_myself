#include <iostream>
using namespace std;


// ?直接插入排序(不带哨兵), 最终效果为稳定的从小到大排序
void InsertSort(int A[], int n)                 // n 为数组元素个数
{
    int i = 0, j = 0, temp = 0;

    for(i = 1; i < n; i++)                      // 将各元素插入已排好序的序列中
    {
        if(A[i] < A[i - 1])                     // 若A[i]关键字小于前驱
        {
            temp = A[i];

            for(j = i - 1; j >= 0 && A[j] > temp; --j)      // 检查所有前面已经排好序的元素
            {
                A[j + 1] = A[j];
            }

            A[j + 1] = temp;
        }
    }
}


//? 直接插入排序(带哨兵)
void InsertSort2(int A[], int n)
{
    int i = 0, j = 0;

    for(i = 2; i <= n; i++)                             // 依次将A[2] ~ A[n]插入到前面已排列颚序列
    {
        if(A[i] < A[i - 1])                             // 若A[i]关键码小于其前驱, 将A[i]插入有序表
        {
            A[0] = A[i];                                // 赋值为哨兵, A[0]不存放元素

            for(j = i - 1; A[0] < A[j]; --j)            // 从后往前查找待插入元素
            {
                A[j + 1] = A[0];                        // 元素向后移动
            }

            A[j + 1] = A[0];                            // 复制到插入位置
        }
    }
}


//? 优化, 折半插入排序   思路: 先用折半查找找到应该插入的位置, 再移动元素



/**
 * @brief 空间复杂度: O(1)
 * 时间复杂度: 主要来自对比关键字, 移动元素, 若有n个元素, 则需要n-1趟处理
 * 平均时间复杂度: O(n²)
 */


// 检验程序
int main()
{
    int n = 0;
    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    InsertSort(A, n);
}