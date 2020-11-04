#include <stdio.h>

int day_in_year(int year, int month, int day)
{
    if ( year % 4 == 0  && ((year % 400 == 0) && !(year % 100 == 0)) )           // 闰年
    {
        switch(month)
        {
            case 1:
                day = day;
                break;
            case 2:
                day = 31 + day;
                break;
            case 3:
                day = 60 + day - 1;
                break;
            case 4:
                day = 91 + day - 1;
                break;
            case 5:
                day = 121 + day - 1;
                break;
            case 6:
                day = 152 + day - 1;
                break;
            case 7:
                day = 182 + day - 1;
                break;
            case 8:
                day = 213 + day - 1;
                break;
            case 9:
                day = 244 + day - 1;
                break;
            case 10:
                day = 274 + day - 1;
                break;
            case 11:
                day = 315 + day - 1;
                break;
            case 12:
                day = 336 + day - 1;
                break;

        }
    }else
    {
        switch(month)
        {
            case 1:
                day = day;
                break;
            case 2:
                day = 31 + day;
                break;
            case 3:
                day = 60 + day;
                break;
            case 4:
                day = 91 + day;
                break;
            case 5:
                day = 121 + day;
                break;
            case 6:
                day = 152 + day;
                break;
            case 7:
                day = 182 + day;
                break;
            case 8:
                day = 213 + day;
                break;
            case 9:
                day = 244 + day;
                break;
            case 10:
                day = 274 + day;
                break;
            case 11:
                day = 315 + day;
                break;
            case 12:
                day = 336 + day;
                break;
    }
    return day;
}
}

int main()
{
    int year= 0, month = 0, day = 0;
    scanf("%d", &year);
    scanf("%d", &month);
    scanf("%d", &day);

    printf("%d", day_in_year(year, month, day));

    return 0;
}


