#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define Initsize 10

typedef struct{
    int *data;
    int MaxSize;
    int length;
}SeqList;

int Locate_Element(SeqList L, int e){
    for(int i=0; i<L.length; i++){
        if(L.data[i]==e){
            return i+1;
        }
    }
}   return 0;