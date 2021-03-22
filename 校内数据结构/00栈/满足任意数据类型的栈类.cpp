#include <iostream>
using namespace std;
/**
 * 1. typedef 为现有类型创建一个新的名字
 */
typedef double stackEntry;

enum Error_code{underflow, overflow, success};

const int maxStack = 10;

class myStack {
public:
    myStack();
    bool empty() const;
    Error_code pop();
    Error_code top(stackEntry &item) const;
    Error_code push(const stackEntry &item);
private:
    int count;
    stackEntry entry[maxStack];
};

/**
 * @brief 2. 使用Cpp模板
 * 
 */

/* 2.1 例子 */
template <class T>
T abs(T n) {
    return n < 0 ? -n: n;
}

int main() {
    cout << "Absolute value of -5 is " << abs<int>(-5); //<int>称为模板函数的实例化
    cout << endl;
    cout << "Absolute value of -5.6 is" << abs<int>(-5.6);
    cout << endl;
}

/* 2.2 用函数模板声明类 */
template<class stackEntry>

class myStack{
public:
    myStack();
    bool empty() const;
    Error_code push(const stackEntry &item);
    Error_code pop();
    Error_code top(stackEntry &item) const;
private:
    int count;
    stackEntry entry[maxStack];
};

/* myStack类的构造函数 */
template<class stackEntry>
myStack<stackEntry>::myStack() {
    count = 0;
}