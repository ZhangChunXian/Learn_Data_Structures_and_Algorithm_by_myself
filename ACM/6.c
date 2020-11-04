#include <stdio.h>
#include <math.h>

int main()
{
    int random = 0, N = 0;

    scanf("%d", &random);
    scanf("%d", &N);

    int count = 0;
    int i = 0;

    int a[100];
    do
    {
        i++;
        scanf("%d", &a[i]);
    }while(a[i] >= 0);

    for (int j = 1; j <= i; j++)
    {
        if (a[j] > random)
        {
            count++;
            printf("Too big\n");
        }else if(a[j] < random && a[j] >= 0)
        {
            count++;
            printf("Too small\n");
        }else if (a[j] == random)
        {
            count++;
            if (count == 1)
            {
                printf("Bingo!\n");
            }else if (count <= 3)
            {
                printf("Lucky You!\n");
            }else if (count <= N && count > 3)
            {
                printf("Good Guess!\n");
            }else if (count >= N+1)
            {
                printf("Game Over\n");
            }
            return 0;
        }

        if (count < N && a[j] < 0)
        {
            printf("Game Over\n");
            return 0;
        }else if (count >= N)
        {
            printf("Game Over\n");
            return 0;
        }
    }
    return 0;
}