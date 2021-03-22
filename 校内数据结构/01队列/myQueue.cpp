#include "Queue.h"

template<class queueEntry>
myQueue<queueEntry>::myQueue() {
    count = 0;
    rear = -1;
    front = 0;
}

template<class queueEntry>
bool myQueue<queueEntry>::empty() const {
    return count == 0;
}


template<class queueEntry>
errorCode myQueue<queueEntry>::append(const queueEntry &item) {
    if (rear >= maxQueue - 1) return overflow;
    count++;
    rear++;
    entry[rear] = item;
    return success;
}

/* 删除队首数据元素 */
template<class queueEntry>
errorCode myQueue<queueEntry>::serve() {
    if (count <= 0) return underflow;
    count--;
    front++;
    return success;
}

template<class queueEntry>
errorCode myQueue<queueEntry>::retrieve(queueEntry &item) const {
    if (count <= 0) return underflow;
    item = entry[front];    // 读取队首元素下标位置的值
    return success;
}

template<class queueEntry>
int myQueue<queueEntry>::size() const {
    return count;
}

template<class queueEntry>
bool myQueue<queueEntry>::full() const {
    return (rear == maxQueue - 1);
}

template<class queueEntry>
void myQueue<queueEntry>::clear() {
    count = 0;
    rear = -1;
    front = 0;
}

/* 运行代码 */

int main() {
    int n;
    double item;
    myQueue<double> numbers;
    cout << "Types in an integer n followed by n decimal numbers." << endl
         << "The numbers will be printed in original order." << endl;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> item;
        numbers.append(item);
    }

    cout << endl;
    while (!numbers.empty()) {
        numbers.retrieve(item);
        cout << item << " ";
        numbers.serve();
    }
    cout << endl;
    return 0;

}