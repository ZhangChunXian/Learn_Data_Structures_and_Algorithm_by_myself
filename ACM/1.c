#include <stdio.h>

double convert(int a, double b)
{
    if(a == 0)
    {
        return (b * 28.35);
    }else if(a == 1)
    {
        return (b / 28.35);
    }
}

int main()
{
    int a = 0;
    double b = 0.0;

    scanf("%d", &a);
    scanf("%lf", &b);

    printf("%.2lf", convert(a, b));

    return 0;
}