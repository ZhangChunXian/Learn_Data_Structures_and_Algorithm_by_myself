// 初始化顺序表需要预分配大片连续空间，过小拓展不方便，过大浪费内存

#define MAXSIZE 10            // define maximum length

typedef struct{
    int data[MAXSIZE];
    int length;
}Sqlist;

void Init_List(Sqlist &L){
    L.length = 0;

    for(int i=0; i<MAXSIZE; i++){
        L.data[i] = 0;
    }
}

// 创建并初始化单链表

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;

void InitList(LinkList &L){
    L = (LNode *)malloc(sizeof(LNode));

    if(L == NULL) return false;

    L->next = NULL;

    return true;
}

// 线性表的销毁

// 顺序表的销毁

// 链表的销毁