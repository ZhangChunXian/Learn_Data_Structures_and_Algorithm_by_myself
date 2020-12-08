#include <iostream>
using namespace std;

/**
 * ! 十字链表法只用于存储有向图
 */

//? 宏定义
#define MAX_VERTEX_NUM 20 // 顶点的最大数量
#define InfoType int // 图中弧包含信息的数据类型
#define VertexType int



//? 数据结构
typedef struct ArcBox {
    int tailvex, headvex; // 弧尾, 弧头对应结点在数组中的位置下标
    struct ArcBox *hlink, *tlink;   // 分别指向弧头相同和弧尾相同的下一个弧
    InfoType *info;       // 存储弧相关信息的指针
}ArcBox;

typedef struct VexNode {    // 定义顶点数据类型
    VertexType data;    // 顶点的数据域
    ArcBox *firstin, *firstout;     // 指向以该顶点为弧头和弧尾的链表首个结点
}VexNode;

typedef struct {
    VexNode xlist[MAX_VERTEX_NUM];  // 存储顶点的一维数组
    int vexnum, arcnum;             // 记录图的顶点数和弧数
}OLGraph;