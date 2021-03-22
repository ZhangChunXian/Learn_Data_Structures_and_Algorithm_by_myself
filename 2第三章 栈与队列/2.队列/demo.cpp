#include <iostream>

typedef struct {
    int data;
    struct LinkNode *next;
}LinkNode;

typedef struct {
    LinkNode *front, *rear;
}LinkQueue;

void InitQueue(LinkQueue &Q) {
    Q.front = Q.rear = (LinkNode *) malloc(sizeof(LinkNode));
    Q.front->next = NULL;
}

bool isEmpty(LinkQueue Q) {
    return Q.front == Q.rear;
}

void EnQueue(LinkQueue &Q, int x) {
    LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
    if (s == NULL) return false;
    s->data = x;
    s->next = NULL;
    Q.rear->next = s;
    Q.rear = s;
}

bool DeQueue(LinkQueue &Q, int &x) {
    if (Q.front == NULL) {
        return false;
    }

    x = Q.front->data;
    if (Q.front == Q.rear) {
        Q.front == NULL;
        Q.rear == NULL;
        return true;
    }
    LinkNode* p = Q.front;
    Q.front = Q.front->next;
    free(p);
    return true;
}