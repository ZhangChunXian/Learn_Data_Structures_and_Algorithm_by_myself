typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;

/*bool ListDelete(int &data, LNode &L, int i)
{
    if(i < 1) return false;

    LNode *s = (LNode *)malloc(sizeof(LNode));

    if( s == NULL) return false;

    int j = 0;          // j代表当前属于的结点

    while(j < i+1 &&  )
    {
        s-> next = 
        j++;
    }

    data =

    s-> next = p->next;


}
*/
bool ListDelete(LinkList &L, int i, int &e)
{
    if ( i < 1) return false;

    LNode *p;           // 指针p指向当前扫描到的结点
    int j=0;            // j代表的是当前p指向的是第几个结点
    p = L;              // L指向头结点，头结点是第零个绩点，通常不存放数据

    while( p != NULL && j < i-1)
    {
        p = p->next;
        j++;
    }

    if ( p == NULL) return false;       // i值不合法

    if( p->next == NULL) return false;  // 第i-1个结点之后已无其他结点

    LNode *q = p->next;                 // 令q指向被删除结点
    e = q->data;                        // 用e返回元素的值

    p->next = q->next;                  // 将*q结点从链中“断开”

    free(q);                            // 释放结点的存储空间
    return true;

}