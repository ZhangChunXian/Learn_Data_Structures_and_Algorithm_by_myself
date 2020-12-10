#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[50] = "     20203434 rest of";
    char *remaining = str + strlen(str);
    long answer = 0;

    answer = strtol(str, &remaining, 2);

    printf("%d", answer);

    return 0;
}