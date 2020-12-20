// 希尔排序
void ShellSort(int A[], int n) {
    int d = 0, i = 0, j = 0;

    // A[0]只是暂存单元, 不是哨兵, 当j<=0时, 插入位置已到
    for (d = n / 2; d >= 1; d = d / 2) {    // 步长变化
        for (i = d + 1; i <= n; ++i) {
            if(A[i] < A[i - d]) {       // 需将A[i]插入有序增量子表
                A[0] = A[i];

                for (j = i - d; j > 0 && A[0] < A[j]; j -= d) {
                    A[j + d] = A[j];
                }

                A[j + d] = A[0];
            }
        }
    }
}