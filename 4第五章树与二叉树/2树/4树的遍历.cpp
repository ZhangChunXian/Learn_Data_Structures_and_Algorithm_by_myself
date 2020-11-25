//? 头文件
#include <iostream>
using namespace std;


//? 宏定义
#define MAX_TREE_SIZE 100    // 树中最多结点数



//? 数据结构
// 数的存储 孩子兄弟表示法, 可以用将数转化为二叉树
typedef struct CSNode
{
    int data;               // 数据域
    struct CSNode *firstchild, *nextsibling; // 第一个孩子和右兄弟指针
}CSNode, *CSTree;



//? 函数声明
//! 伪代码


// 树的先根遍历
void PreOrder(TreeNode *R)
{
    if (R != NULL)
    {
        visit(R);       // 访问根节点
        while (R还有下一个子树T)
        {
            PreOrder(T);      // 先根遍历下一棵子树
        }
    }


}

// 树的后根遍历, 深入优先遍历
void PostOrder(TreeNode *R)
{
    if (R != NULL)
    {
        while(R还有下一个子树T)
        {
            PostOrder(T);       // 后跟遍历下一棵子树
        }

        visit(R);               // 访问根节点
    }
}



// 树的层次遍历(用队列实现) 广度优先遍历

