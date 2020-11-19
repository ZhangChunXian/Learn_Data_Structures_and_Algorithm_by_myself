/*与队尾指针指向队尾元素的后一个元素的区别


入队操作:
指向后一个元素的入队操作:
Q.data[Q.rear] = x;
Q.rear = (Q.rear + 1) % MAXSIZE;
指向队尾指针的入队操作:
Q.rear = (Q.rear + 1) % MAXSIZE;
Q.data[Q.rear] = x;

初始化操作:
指向队尾元素的指针
void InitQueue(SqQueue &Q)
{
    Q.front = 0;
    Q.rear = MAXSIZE - 1;
}

判空操作:
(Q.rear + 1) % MAXSIZE == Q.front

判满操作:
方案一: 牺牲一个存储单元
(Q.rear + 2) % MAXSIZE == Q.front

方案二: 使用辅助变量
1. 使用size变量
bool EnQueue(SqQueue &Q, int x)
{
    if (Q.size == MAXSIZE) // 队列已满, 返回false
    {
        return false;
    }

    Q.rear = (Q.rear + 1) % MAXSIZE; // 队尾指针后移
    Q.data[Q.rear] = x;              // 将x插入队尾
    Q.size++;
    return true;
}
*/

#include <iostream>


