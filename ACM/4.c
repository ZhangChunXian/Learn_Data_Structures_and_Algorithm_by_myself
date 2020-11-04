#include <stdio.h>

int Prime_sum(int m, int n)
{
    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        for (int j = 2; j <= (int)(i/2); j++)
        {
            if (i % j == 0)
            {
                sum += i;
                break;
            }
        }
    }
    return sum;
}

int main()
{
    int m = 0, n = 0;

    scanf("%d", &m);
    scanf("%d", &n);

    printf("%d", Prime_sum(m, n));
    return 0;
}