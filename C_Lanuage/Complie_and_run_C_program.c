#include <stdio.h>

void testv(int & x)
{
    x = 1024;
    printf("x = %d\n", x);
}

int main()
{
    int x = 1;
    printf("x = %d\n", x);
    testv(x);
    printf("x = %d\n", x);

    return 0;
}