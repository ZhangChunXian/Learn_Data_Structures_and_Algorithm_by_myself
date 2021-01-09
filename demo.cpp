#include <iostream>
#include <malloc.h>
#include <algorithm>
using namespace std;

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

void BubbleSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool flag = false;

        for (int j = n - 1; j > i; j--) {
            if (A[j] < A[j - 1]) {
                swap(A[j], A[j - 1]);
                flag = true;
            }
        }

        if (flag == false) return;
    }
}

void SelectSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int MinIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[MinIndex]) {
                MinIndex = j;
            }
        }

        if (MinIndex != i) swap(A[i], A[MinIndex]);
    }
}

/**
 * @brief 快速排序
 * 
 */
int Partition(int A[], int low, int high);


void QuickSort(int A[], int low, int high) {
    if (low < high) {
        int PivotPos = Partition(A, low, high);

        QuickSort(A, low, PivotPos - 1);
        QuickSort(A, PivotPos + 1, high);
    }
}

int Partition(int A[], int low, int high) {
    int Pivot  = A[low];

    while (low < high) {
        if (low < high && A[high] > Pivot) high--;
        A[low] = A[high];
        if (low < high && A[low] < Pivot) low++;
        A[high] = A[low];
    }

    A[low] = Pivot;
    return low;
}

#define n 256
int *B = (int *)malloc(n * sizeof(int));

void Merge(int A[], int low, int mid, int high) {
    int i, j, k;

    for (k = low; k <= high; k++)
        B[k] = A[k];

    for (i = low, j = mid + 1, k = i; i <= mid && j <= high; k++) {
        if (B[i] <= B[j]) A[k] = B[i++];
        else if (B[i] > B[j]) A[k] = B[j++];
    }

    while (i <= mid) A[k++] = B[i++];
    while (j <= high) A[k++] = B[j++];
}

void MergeSort(int A[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(A, low, mid);
        MergeSort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}