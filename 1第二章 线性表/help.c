#include <stdio.h>

int add(int x, int y);

int main() {
	int x = 9;
	int y = 2;
	printf("%d\n",  add(x, y));
	getchar();
}

int add(int x, int y) {
	if (x <= 0) {
		return 0;
	}
	if (x == 1) {
		return y;
	}
	return add(x - 1, y) + add(x - 2, y) + y;
}