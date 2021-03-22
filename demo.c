#include <stdio.h>
#include <stdlib.h>
#include <bool.h>
/* 简单选择排序 */
void SelectSort(int A[], int n) {

    for (int i = 0; i < n - 1; i++) {
        /* 找出最小的第i个元素 */
        int MinIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[MinIndex]) {
                MinIndex = j;
            }
        }

        if (i != MinIndex) {
            int temp = A[MinIndex];
            A[MinIndex] = A[i];
            A[i] = temp;
        }
    }
}

/* 插入排序 */
// void InsertSort(int A[], int n) {

//     int i = 0, j = 0, temp = 0;
//     for (i = 1; i < n; i++) {
//         if (A[i] < A[i - 1]) {
//             int temp = A[i];

//             for (j = i - 1; j >= 0 && A[j] > temp; --j) {
//                 A[j + 1] = A[j];
//             }

//             A[j + 1] = temp;
//         }
//     }
// }

void InsertSort(int A[], int n) {
    int i = 0, j = 0, temp = 0;

    for (i = 1; i < n; i++) {
        if (A[i] < A[i - 1]) {
            temp = A[i];

            for (j = i - 1; j >= 0 && A[j] > temp; j--) {
                A[j + 1] = A[j];
            }
            A[j + 1] = temp;
        }
    }
}

// void BubbleSort(int A[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         bool flag = false;

//         for (int j = n - 1; j > i; j--) {
//             if (A[j - 1] > A[j]) {
//                 swap(A[j - 1], A[j]);
//                 flag = true;
//             }

//             if (flag == false) return;
//         }
//     }
// }


void BubbleSort(int A[], int n) {

    for (int i = 0; i < n - 1; i++) {
        bool flag = false;

        for (int j = n - 1; j > i; j--) {
            if (A[j - 1] > A[j]) {
                swap(A[j - 1], A[j]);
                flag = true;
            }
        }

        if (flag == false) return;
    }
}