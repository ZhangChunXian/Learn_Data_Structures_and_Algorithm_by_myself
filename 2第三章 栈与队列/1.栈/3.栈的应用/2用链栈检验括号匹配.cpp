// 头文件
#include <iostream>


// 定义链栈数据结构(带头结点)
typedef struct Linknode
{
    char data;              // 数据域
    struct Linknode *next; // 指针域
}*LiStack;


/* 函数声明 */
bool initStack(LiStack &lst);
// 判断栈空
bool isEmpty(LiStack lst);
// 元素进栈
bool push(LiStack &lst, char x);
// 元素出栈
bool pop (LiStack lst, char &x);


// 函数定义
bool initStack(LiStack &lst)
{
    lst = (LiStack)malloc(sizeof(LiStack));

    if (lst == NULL)    return false;
    lst->data = '\0';
    lst->next = NULL;                   // 初始化头结点元素
    return true;
}

bool isEmpty(LiStack lst)
{
    return (lst->next == NULL);
}

bool push(LiStack &lst, char x)
{
    Linknode *s = (Linknode *)malloc(sizeof(Linknode));

    if (s == NULL) return false;
    s->data = x;
    s->next = NULL;

    // 头结点的后插操作
    s->next = lst->next;
    lst->next = s;
    return true;
}

bool pop(LiStack lst, char &x)
{
    if (lst->next == NULL) return false;

    Linknode *s = lst->next;
    x = lst->next->data;
    lst->next = lst->next->next;

    free(s);
    return true;
}


