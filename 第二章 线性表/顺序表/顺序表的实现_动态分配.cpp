#include <stdio.h>
#include <stdlib.h>

#define INITSIZE 10

typedef struct{
    int *data;
    int Maxsize;
    int length;
}SeqList;

void InitList(SeqList &L){

    L.data=(int *)malloc(INITSIZE*sizeof(int));
    L.length=0;
    L.Maxsize=INITSIZE;
}

void IncreaseSize(SeqList &L, int len){
    int *p=L.data;

    L.data=(int *)malloc((L.Maxsize+len)*sizeof(int));

    for(int i=0; i<L.length, i++){
        L.data[i]=p[i];
    }
    
    L.Maxsize+=len;

    free(p);
}

int main()
{
    SeqList L;
    InitList(L);

    IncreaseSize(L, 5);

    return 0;
}