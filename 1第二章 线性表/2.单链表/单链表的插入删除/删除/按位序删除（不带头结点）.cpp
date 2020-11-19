typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;

bool ListDelete(LinkList &L, int i, int &e)
{
    if ( i < 1 ) return false;

    if( i == 1 )
    {
        free(L);
        return true;
    }

    LNode *p = L;
    int j = 1;

    while( p!= NULL && j < i-1)
    {
        p = p->next;
        j++;
    }

    if(p == NULL) return false;

    if(p->next == NULL) return false; // 第i-1 个结点之后已无其他结点

    LNode *q = p->next;

    p->next = q->next;
    e = q->data;

    free(q);
    return true;
}