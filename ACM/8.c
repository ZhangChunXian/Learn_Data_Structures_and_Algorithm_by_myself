#include <stdio.h>

int fun1(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }else
    {
        return (fun1(n-1) + fun1(n - 2));
    }
}

int max_gys(int m, int n)
{
    int divisor = 1;
    for(int i = 2; i< (int)(n/2); i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            divisor = i;
        }
    }
    return divisor;
}

int min_multiply(int m, int n)
{
    return ( m * n / max_gys(m, n));
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int k1 = fun1(n - 1);
    int k2 = fun1(n - 2);

    printf("%d ", max_gys(k1, k2));
    printf("%d", min_multiply(k1, k2));

    return 0;
}