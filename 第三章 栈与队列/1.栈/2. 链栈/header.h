

// 定义链栈的数据结构
typedef struct Linknode
{
    int data;                       // 数据域
    struct Linknode *next;          // 指针域
}*LiStack;                          // 栈类型定义