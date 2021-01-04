void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void SimpleSelectionSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[min]) min = j;
        }

        if (min != i) swap(A[i], A[min]);
    }
}