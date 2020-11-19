

#define MAXSIZE 1024        // 静态链表的最大长度


struct Node{                // 静态链表结构类型的定义
    int data;               // 存放数据元素
    int next;               // 下一个元素的数组下标
}Static_LinkList[MAXSIZE];

// 为静态链表声明连续的存储空间
void test_Static_LinkList() {
    Static_LinkList a[MAXSIZE];         // 定义数组a作为静态链表
}


// 初始化静态链表
