#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>

bool Prime(int n)
{
    if (n <= 1) return false;
    if (n == 2) return true;
    for(int i = 2; i <= (int)(n / 2); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    char str[101];
    fgets(str, 101, stdin);

    int maxn = 0;
    int minn = 1;
    int temp1 = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        temp1 = 0;
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[i] == str[j])
            {
                temp1++;
            }
        }

        if (temp1 > maxn)
        {
            maxn = temp1;
        }

        if (temp1 < minn)
        {
            minn = temp1;
        }
    }

    if(Prime(maxn - minn))
    {
        printf("Lucky Word\n");
    }else
    {
        printf("No Answer\n");
    }

    printf("%d", maxn - minn);

    return 0;
}