#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int a[100][100] = {0};

    int i = 0, j = 0;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int max_in_row = a[0][0];
    int max_column = 0;
    int max_row = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <n; j++)
        {
            if (a[i][j] > max_in_row)
            {
                max_in_row = a[i][j];
                max_column = j;
                max_row = i;
            }
        }
        int temp1 = max_column;
        int temp2 = max_row;
        int count = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i][max_column] < max_in_row)
            {
                count = 1;
                break;
            }
        }

        if(count == 1)
        {
            break;
        }else if (count == 0)
        {
            printf("%d %d\n", temp2, temp1);
            sum++;
        }
    }

    if (sum == 0)
    {
        printf("NO");
    }

    return 0;
}