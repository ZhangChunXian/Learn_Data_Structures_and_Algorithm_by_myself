/**
 * @brief 用第一个元素将待排序序列划分成左右两个部分
 * 
 * @param A 
 * @param low 
 * @param high 
 * @return int 
 */
int Partition(int A[], int low, int high);
/**
 * @brief 快速排序
 * 
 * @param A 
 * @param low 
 * @param high 
 */
void QuickSort(int A[], int low, int high);


int Partition(int A[], int low, int high) {
    int pivot = A[low];             // 用第一个元素作为枢纽

    while (low < high) {            // 用low, high搜索枢纽的最终位置
        while (low < high && A[high] >= pivot) --high;
        A[low] = A[high];           // 比枢纽小的元素移动到左端

        while (low < high && A[low] <= pivot) ++low;
        A[high] = A[low];           // 比枢纽大的元素移动到右端
    }

    A[low] = pivot;                 // 枢纽元素存放到最终位置

    return low;                     // 返回存放枢纽的最终位置
}

void QuickSort(int A[], int low, int high) {
    if (low < high) {       // 递归跳出的条件
        int pivotpos = Partition(A, low, high); // 划分

        QuickSort(A, low, pivotpos - 1);        // 划分左子表
        QuickSort(A, pivotpos + 1, high);       // 划分右子表
    }
}