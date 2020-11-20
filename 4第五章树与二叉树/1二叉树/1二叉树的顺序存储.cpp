//? 头文件
#include <iostream>
using namespace std;


//? 宏定义
#define MAXSIZE 100


//? 定义数的顺序存储数据结构, 只适合存储完全二叉树
struct TreeNode
{
    int value;              // 树结点中的数据元素
    bool isEmpty;           // 结点是否为空
};


TreeNode t[MAXSIZE];         // 定义一个长度位MAXSIZE的数组t
// 初始化数组

void Init_TreeNode(TreeNode *t)
{
    for(int i = 0; i < MAXSIZE; i++)
    {
        t[i].isEmpty = true;
    }
}

