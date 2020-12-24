// 基数排序基于链式结构

typedef struct LinkNode {
    int data;
    struct LinkNode *next;
}LinkNode, *LinkList;

typedef struct {        // 链式队列
    LinkNode *front, *rear; // 队列的对头和队尾指针
}LinkQueue;

LinkQueue Q[10];