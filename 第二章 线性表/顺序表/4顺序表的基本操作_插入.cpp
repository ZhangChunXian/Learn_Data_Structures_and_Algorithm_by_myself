#include <stdlib.h>
#include <stdio.h>

#define MAXSIZE 10       // define maximum length

typedef struct{
    int data[MAXSIZE];
    int length;
}Sqlist;

void InitList(Sqlist &L){
    L.length = 0;

    for (int i = 0; i <MAXSIZE; i++){
        L.data[i] = 0;
    }

}
void ListInsert(Sqlist &L, int i, int e){
    for(int j=L.length; j>=i; j--)
        L.data[j] = L.data[j-1];
    
    L.data[i-1] = e;
    L.length++;
}

bool ListInsert_2(Sqlist &L, int i, int e){
    if(i<1 || i>L.length+1)
        return false;
    if(L.length>=MAXSIZE)
        return false;
    for(int j=L.length; j>=i; j--)
        L.data[j] = L.data[j-1];
    
    L.data[i-1] = e;
    L.length++;

    return true;
}

int main(){
    Sqlist L;
    InitList(L);

    ListInsert(L, 3, 3);
    return 0;
}