// 函数声明
void BuildMaxHeap(int A[], int len);    // 建立大根堆
void HeadAdjust(int A[], int k, int len);   // 将以k为根的子树调整为大根堆
void swap(int &a, int &b);          // 交换两个整数的值
void HeapSort(int A[], int len);    // 堆排序


// 函数定义
// 建立大根堆(代码)
void BuildMaxHeap(int A[], int len) {
    for(int i = len / 2; i > 0; i--)    // 从后往前调整所有非终端结点
        HeadAdjust(A, i, len);
}

// 将以k为根的子树调整为大根堆
void HeadAdjust(int A[], int k, int len) {
    A[0] = A[k];                        // A[0]暂存子树的根结点

    for (int i = 2 * k; i <= len; i *= 2) { // 沿key较大的子结点向下筛选
        if (i < len && A[i] > A[i + 1]) {
            i++;                            // 取key较大的子结点的下标
        }
        if (A[0] >= A[i]) break;            // 筛选结束
        else {
            A[k] = A[i];                    // 将A[i]调整到双亲结点上
            k = i;                          // 修改k值, 以便继续向下筛选
        }
    }
    A[k] = A[0];                            // 被删选结点的值放在最终位置
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

/**
 * @brief 堆排序, 空间复杂度O(1), 排序不稳定
 * 
 * @param A 
 * @param len 
 */
void HeapSort(int A[], int len) {
    BuildMaxHeap(A, len);                   // 初试建堆

    for(int i = len; i > 1; i--) {          // n - 1趟的交换的建堆过程
        swap(A[i], A[1]);                   // 堆顶元素和堆底元素交换
        HeadAdjust(A, 1, i - 1);            // 把剩余的待排序元素整理成堆
    }
}