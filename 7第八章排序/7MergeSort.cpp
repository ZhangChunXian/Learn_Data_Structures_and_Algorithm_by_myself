#include <malloc.h>

/**
 * 归并: 将两个或者多个已经有序的元素合并成一个
 * 归并排序: 在内部排序中一般采用二路归并
 */

#define n 256
int *B = (int *)malloc(n * sizeof(int));    // 辅助数组B

// 函数定义
void Merge(int A[], int low, int mid, int high); // A[low...mid]和A[mid+1...high]各自有序, 将两个部分归并
void MergeSort(int A[], int low, int high);      // 归并排序

// 函数定义
// A[low...mid]和A[mid+1...high]各自有序, 将两个部分归并
void Merge(int A[], int low, int mid, int high) {
    int i, j, k;

    for (k = low; k <= high; k++) {
        B[k] = A[k];                        // 将A中所有元素复制到B
    }

    for (i = low, j = mid + 1, k = i; i <= mid && j <= high; k++) {
        if (B[i] <= B[j])
            A[k] = B[i++];      // 将较小的值复制到A中
        else
            A[k] = B[j++];
    }// for

    while(i <= mid) A[k++] = B[i++];
    while(j <= high) A[k++] = B[j++];
}


void MergeSort(int A[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;         // 从中间划分
        MergeSort(A, low, mid);             // 对左半部分归并
        MergeSort(A, mid + 1, high);        // 对右半部分归并
        Merge(A, low, mid, high);           // 归并
    }// if
}