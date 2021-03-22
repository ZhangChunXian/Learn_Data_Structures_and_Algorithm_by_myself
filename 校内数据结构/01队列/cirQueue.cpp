#include <iostream>
using namespace std;

enum errorCode{underflow, overflow, success};
const int maxQueue = 10;

template<class queueEntry>
class cirQueue {
public:
    cirQueue();
    bool empty() const;
    errorCode serve();
    errorCode append(const queueEntry &item);
    errorCode retrieve(queueEntry &item) const;
    bool full() const;
    int size() const;
    void clear();
    errorCode serveAndRetrieve(queueEntry &item);
private:
    int count;
    int front, rear;
};

template<class queueEntry>
cirQueue<queueEntry>::cirQueue() {
    count = 0;
    rear = maxQueue - 1;
    front = 0;
}

template<class queueEntry>
bool cirQueue<queueEntry>::empty() const {
    return count == 0;
}

template<class queueEntry>
errorCode cirQueue<queueEntry>::append(const queueEntry &item) {
    if (count >= maxQueue) return overflow;
    count++;
    rear = ((rear + 1) % maxQueue);
    entry[rear] = item;
    return success;
}

template<class queueEntry>
errorCode cirQueue<queueEntry>::serve() {
    if (count <= 0) return underflow;
    count--;
    front = (front + 1) % maxQueue;
    return success;
}

template<class queueEntry>
errorCode cirQueue<queueEntry>::retrieve(queueEntry &item) const {
    if (count <= 0) return underflow;
    item = entry[front];
    return success;
}

template<class queueEntry>
int cirQueue<queueEntry>::size() const {
    return count;
}

template<class queueEntry>
bool cirQueue<queueEntry>::full() const {
    return (count == maxQueue);
}

template<class queueEntry>
void cirQueue<queueEntry>::clear() {
    count = 0;
    rear = maxQueue - 1;
    front = 0;
}

template <class queueEntry>
errorCode cirQueue<queueEntry>::serveAndRetrieve(queueEntry &item) {
    if (count <= 0) return underflow;
    item = entry[front];
    count--;
    front = (front + 1) % maxQueue;
    return success;
}