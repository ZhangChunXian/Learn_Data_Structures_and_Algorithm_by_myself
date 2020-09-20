#include <stdlib.h>
#include <stdio.h>

#define MAXSIZE 10

typedef struct{
    int data{MAXSIZE};
    int length;
}SqList;

bool ListInsert(Sqlist &L, int i){
    if (i<=0 || i>=L.length+1)
        return false;
    if (L.lenght <= 0)
        return false;

    for (int j= i+1 ; j <= L.lenght+1; j++){
        a[j-2] = a[j-1];
    }
}

bool ListDelete(SqList &L, int i, int &e){
    if(i<1 || i>L.length)
        return false;

    e = L.data[i-1];

    for(int j=i; j<L.length, j++)
        L.data[j-1] = L.data[j];
    
    L.length--;
`
    return true;
}

int main()
{
    SqList L;
    InitList(L);

    int e=-1;

}