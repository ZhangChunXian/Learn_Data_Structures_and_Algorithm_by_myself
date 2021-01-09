void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
/**
 * @brief 冒泡排序(稳定排序算法, 最终数组从小到大递增) 空间复杂度O(1), 最坏时间复杂度O(n²)
 *  冒泡排序适用于链表
 * @param A
 * @param n
 */
void BubbleSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool flag = false;              // 表示本趟冒泡排序是否发生交换的标志

        for (int j = n - 1; j > i; j--) {   // 一趟冒泡过程
            if (A[j - 1] > A[j]) {          // 若为逆序
                swap(A[j - 1], A[j]);       // 交换
                flag = true;
            }

            if (flag == false)
                return;                 // 本趟遍历没有发生交换, 说明表已经有序
        }
    }
}

// 冒泡排序适用于链表

