# include <stdio.h>

# define Maxsize 10

typedef struct{

    int data[Maxsize];
    int length;
}Sqlist;

 //initialize the linear table
void InitList(Sqlist &L){
    for(int i=0; i<Maxsize; i++){
        L.data[i]=0;
    }
    L.length=0; 
}

int main(){
    Sqlist L;
    InitList(L);
}




