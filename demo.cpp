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

void InsertSort2(int A[], int n) {
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

struct ListNode* {
    int val;
    ListNode* next;
    ListNode*(int x) : val(x), next(NULL) {}
};

class Solution {
public:
ListNode* insertionSortList(ListNode* head) {
	if (!head || !head->next)
		return head;
	ListNode *dummyhead = new ListNode(-1);//伪头指针
	dummyhead->next = head;
	ListNode *prev = head;
	ListNode *node = head->next;
	while (node)
	{
		if (node->val < prev->val)
		{
			ListNode* temp = dummyhead;//！！temp要等于dummyhead，这样才可以比较第一个元素
			while (temp->next->val < node->val)//！！！这里是temp->next：因为要修改前面的temp的指向
			{
				temp = temp->next;//指针后移
			}
			prev->next = node->next;
			node->next = temp->next;
			temp->next = node;
			node = prev->next;//此时不用改变prev指向！因为prev没有变，只是待排序元素变了位置。
		}
		else
		{
			prev = prev->next;
			node = node->next;
		}
	}
	return dummyhead->next;//!!!不能返回head！！因为后面会改变head所指向内存的位置！
}
};