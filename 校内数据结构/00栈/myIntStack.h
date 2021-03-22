#include <iostream>
using namespace std;


enum Error_code{underflow, overflow, success};
const int maxstack = 10;

class myStack {
public:
    myStack();
    bool empty() const;
    Error_code push(const int &item);
    Error_code pop();
    Error_code top(int& item) const;        // 提取栈顶元素

private:
    int count;
    int entry[maxstack];
};