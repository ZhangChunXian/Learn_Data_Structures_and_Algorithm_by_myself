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

int StrCompare(SString S, SString T) {
    for (int i = 1; i <= S.length && i <= T.length; i++) {
        if (S.ch[i] != T.ch[i]) {
            return S.ch[i] - T.ch[i];
        }
    }

    return S.length - T.length;
}

int Index(SString S, SString T) {
    int i = 1, k = 1;
    int temp = 1;
    for(; i <= S.length - T.length + 1;) {
        if(S.ch[i] != T.ch[k]) {
            i++;
            continue;
        }else if(S.ch[i] == T.ch[k]) {
            temp = i;
            while(S.ch[i] == T.ch[k]) {
                i++;
                k++;
            }
        }
        if (k == T.length) {
            return temp;
        }else {
            i = temp++;
            k = 1;
        }
    }

    return 0;
}

int Index(SString S, SString T) {
    int i = 1, n = S.length, m = T.length;
    SString sub;

    while(i <= n - m + 1) {
        SubString(sub, S, i, m);

        if(StrCompare(sub, T) != 0) {
            ++i;
        }else {
            return i;
        }

        return 0;
    }
}