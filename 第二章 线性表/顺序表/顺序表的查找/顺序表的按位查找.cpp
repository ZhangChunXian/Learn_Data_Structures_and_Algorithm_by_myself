#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAXSIZE 10

// static
typedef struct{
    int data[MAXSIZE];
    int length;
}SqList;

int GetElement(SqList L, int i){
    return L.data[i-1];
}

// Dynamic lookup

#define INITSIZE 10

typedef struct{
    int *data;
    int MaxSize;
    int length;
}SeqList;

int GetElement(SeqList L, int i){
    return L.data[i-1];
}