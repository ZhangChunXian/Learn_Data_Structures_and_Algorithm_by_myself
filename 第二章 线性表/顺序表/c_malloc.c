#include <stdio.h>          /* printf, scanf, NULL */
#include <stdlib.h>         /* malloc, free, rand, system */

int main()
{
    int i, n;
    char * buffer;

    printf("Please input the length of the string: ");
    scanf("%d", &i);

    buffer = (char *)malloc(i+1);

    if(buffer == NULL) exit(1);

    // Randomly generate the string
    for(n = 0; n < i; n++)
        buffer[n] = rand()%26 + 'a';
    buffer[i] = '\0';

    printf("%s\n", buffer);
    free(buffer);

    system("pause");
    return 0;
}