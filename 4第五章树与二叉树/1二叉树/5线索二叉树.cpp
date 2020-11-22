//? 头文件
#include <iostream>
using namespace std;



//? 线索二叉树数据结构, 即线索二叉链表
typedef struct ThreadNode
{
    int data;
    struct ThreadNde *lchild, *rchild;
    int ltag, rtag;                             // 左右线索标志
}ThreadNode, *ThreadTree;

/** 
 * ! tag == 0 , 表示指针指向孩子
 * ! tag == 1 , 表示指针是"线索"
 * ! 当tag == 1时, 表示lchild指向前驱, rchild指向后继
 */