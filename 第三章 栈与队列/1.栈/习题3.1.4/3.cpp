


bool Judge(char A[])
{
    int i = 0, cnt = 0;                 // i为下标, cnt为计数器, 输入+1, 输出-1

    for(; A[i] != '\0'; i++)
    {
        if(A[i] == 'I')
        {
            cnt++;
        }
        if(A[i] == 'O')
        {
            cnt--;
        }

        if (cnt < 0) return false;
    }

    return (cnt == 0);
}