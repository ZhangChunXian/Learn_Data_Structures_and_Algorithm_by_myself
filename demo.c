// #include <stdio.h>

// int main()
// {
//     /**
//      * FILE *fopen( const char *filename, const char *mode);
//      * int fclose (FILE *fp);
//      * int fputc(int c, FILE *fp);
//      * int fputs(const char *s, FILE *fp);
//      * int fprintf(FILE *fp, const char *format, );
//      */
//     /**
//      * 写入文件
//      */
//     // FILE *fp = NULL;

//     // fp = fopen("test.txt", "w+");
//     // fprintf(fp, "This is testing for fprintf...\n");
//     // fputs("This is testing for fputs...\n", fp);
//     // fclose(fp);

//     /**
//      * 读取文件
//      * 
//      */
//     FILE *fp = NULL;
//     char buff[255];

//     fp = fopen("test.txt", "r");
//     fscanf(fp, "%s", buff);
//     printf("1: %s\n", buff);

//     fgets(buff, 255, (FILE*)fp);
//     printf("2: %s\n", buff);

//     fgets(buff, 255, (FILE*)fp);
//     printf("3: %s\n", buff);

//     fclose(fp);
// }

#include <stdio.h>

int main() {
    FILE *fp = NULL;
    fp = fopen("test.txt", "r+");   // 确保test.txt文件已创建
    fprintf(fp, "This is testing for fprintf...\n");
    fseek(fp, 10, SEEK_SET);
    if (fputc(65, fp) == EOF) {
        printf("fputc fail");
    }
    fclose(fp);
}