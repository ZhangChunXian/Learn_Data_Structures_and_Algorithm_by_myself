#include <iostream>
using namespace std;

#define MAXLEN 255
#define MIN(a, b) ((a) < (b) ? (a) : (b))

typedef struct {
    char ch[MAXLEN];
    int length;
}SString;

bool SubString(SString &Sub, SString S, int pos, int len) {
    if (pos + len - 1 > S.length || pos < 0 || len < 0) {
        return false;
    }

    for (int i = pos; i < pos + len; i++) {
        Sub.ch[i - pos + 1] = S.ch[i];
    }

    Sub.length = len;

    return true;
}

int StrCompare(SString S)