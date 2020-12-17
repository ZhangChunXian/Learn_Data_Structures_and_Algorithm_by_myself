//? 头文件
#include <iostream>
using namespace std;


//? 定义数据结构
// 二叉排序树结点
typedef struct BSNode {
    int key;
    struct BSTNode *lchild, *rchild;
}BSTNode, BSTree;

// 五叉排序树的结点定义
struct Node {
    int keys[4];    // 最多4个关键字
    struct Node* child[5];  // 最多5个孩子
    int num;    // 结点中有几个关键字
};