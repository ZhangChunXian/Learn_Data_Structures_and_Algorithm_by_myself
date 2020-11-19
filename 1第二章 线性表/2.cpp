#include <stdio.h>

int initializer(void)
{
    return 50;
}

int main()
{
    static int i = initializer();
    printf("%d\n", i);
    return 0;
}