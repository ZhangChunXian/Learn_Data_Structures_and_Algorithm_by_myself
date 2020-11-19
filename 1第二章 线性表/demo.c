#include <stdio.h>
#define max(x, y) (x) > (y) ? (x) : (y)
//对于每株草药有不采此株草药和采此株草药两种情况;
//不采此株草药的价值总和 = 所拥有时间采之前的草药所能获得的最大价值
//采此株草药价值总和 = 此株草药的价值+去除采此株草药花费时间的剩余时间采之前的草药所能获得的最大价值
int main()
{
    int T, M;
    while (~scanf("%d %d", &T, &M))
    {
        int time[M], value[M], i, j, k;
        for (i = 0; i < M; i++)
        {
            scanf("%d %d", &time[i], &value[i]);
        }
        //所拥有时间所能获取的最大价值的结果数组
        int results[T + 1];
        //初始化一维数组元素为0
        for (i = 0; i < T + 1; i++)
        {
            results[i] = 0;
        }
        for (j = 1; j <= M; j++)
        {
            for (k = T; k >= 1; k--)
            {
                //拥有时间大于采此株草药花费时间
                if (k >= time[j - 1])
                {
                    //求两种情况的最大值作以拥有时间采当前所有草药所能获取的最大价值
                    results[k] = max(results[k], results[k - time[j - 1]] + value[j - 1]);
                }
            }
        }
        printf("%d\n", results[T]);
    }
    return 0;
}