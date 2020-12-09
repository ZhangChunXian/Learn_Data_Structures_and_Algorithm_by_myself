#include <iostream>
using namespace std;

#define MAXLEN 255
#define MIN(a, b) ((a) < (b) ? (a) : (b))

typedef struct {
    char ch[MAXLEN];
    int length;
}SString;


// 串的朴素模式匹配算法
int Index(SString S, SString T) {
    int k = 1, i = 1, j = 1;

    while(i <= S.length && j <= T.length) {
        if (S.ch[i] == T.ch[j]) {
            ++i;
            ++j;            // 继续比较后继字符
        } else {
            k++;            // 检查下一个子串
            i = k;
            j = 1;
        }
    }

    return j > T.length ? k: 0;
}