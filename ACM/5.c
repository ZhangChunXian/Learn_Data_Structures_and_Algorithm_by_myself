#include <stdio.h>
#include <math.h>

int main()
{
    int m, n;

    scanf("%d", &m);
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int b[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[i][j];
        }
    }

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = b[i][(% n];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}