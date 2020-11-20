#include <stdio.h>
#include <string.h>

#define M 30010
#define Max(a, b) a > b ? a : b

int main()
{
    int N, m, i, j, p, v;
    long int dp[M];

    memset(dp, 0, sizeof(dp));

    scanf("%d%d", &N, &m);

    for (i = 1; i <= m; i++)
    {
        scanf("%d%d", &v, &p);

        for (j = N; j >= v; j--)
        {
            dp[j] = Max(dp[j], dp[j - v] + v * p);
        }
    }

    printf("%ld\n", dp[N]);

    return 0;
}