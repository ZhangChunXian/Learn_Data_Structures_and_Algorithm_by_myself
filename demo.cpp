#include <iostream>
using namespace std;

void InsertSort(int A[], int n) {
    int i = 0, j = 0, temp = 0;

    for (i = 1; i < n; i++) {
        if (A[i] < A[i - 1]) {
            temp = A[i];

            for (j = i - 1; j >= 0 && A[j] > temp; --j) {
                A[j + 1] = A[j];
            }
            A[j + 1] = temp;
        }
    }
}

int main() {
    int *p = NULL;
    p = new int;

    int *p = new int;
    int *p = new int(25);
    float *q = new float(75.25);

    int *pp = new int[10];

    int *p = new(nothrow) int;
    if (!p) {
        cout << "Memory allocation failed\n";
    }

    delete p;
    delete q;
    delete[] p;
}