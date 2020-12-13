#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "11.03e 0mn";
    char *end;

    double number;
    number = strtod(str, &end);
    printf("number = %lf", number);
    printf("\nend string = %s", end);

    return 0;
}