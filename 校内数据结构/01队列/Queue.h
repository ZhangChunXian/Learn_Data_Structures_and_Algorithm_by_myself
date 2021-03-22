#include <iostream>

using namespace std;


enum errorCode{underflow, overflow, success};
/* 1. 用数组实现队列的类 */
const int maxQueue = 10;        // 队列中最大元素个数
template <class queueEntry>     // 类模板
class myQueue {
public:
    myQueue();
    bool empty() const;
    errorCode serve();
    errorCode append(const queueEntry &item);
    errorCode retrieve(queueEntry &item) const;
    int size() const;
    bool full() const;
    void clear();
public:
    int count;
    int front, rear;
    queueEntry entry[maxQueue];
};