#include "myIntStack.h"

// 构造函数
myStack::myStack() {
    count = 0;
}

// 验证栈是否为空
/**
 * @brief if the stack is empty, true is returned
 * otherwise false is returned.
 * @return bool
 */
bool myStack::empty() const{
    bool outCome = true;
    if (count > 0) outCome = false;
    return outCome;
}

/**
 * @brief 如果栈未满, 则向他头部添加元素
 * 如果栈满, 返回错误信息
 */
Error_code myStack::push(const int& item) {
    Error_code outcome = success;
    if (count >= maxstack)
        outcome = overflow;
    else
        entry[count++] = item;
    return outcome;
}

/**
 * @brief 如果栈未空, 则从头部移除元素
 * 如果栈空, 返回错误信息
 */
Error_code myStack::pop() {
    Error_code outcome = success;
    if (count == 0)
        outcome = underflow;
    else --count;
    return outcome;
}

/**
 * @brief 如果栈未空, 则item被赋值为栈顶元素
 * 如果栈空, 返回错误信息
 */
Error_code myStack::top(int &item) const {
    Error_code outCome = success;
    if (count == 0)
        outCome = underflow;
    else
        item = entry[count - 1];
    return outCome;
}


/**
 * @brief 演示
 * 栈的插入, 打印栈顶元素, 删除
 * @return int 
 */
int main() {
    int n;
    int item;

    myStack numbers;            // 栈的实例化
    cout << "Type in an integer n followed by n integer numbers" << endl
         << "The numbers will be printed in reverse order." << endl;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> item;
        numbers.push(item);
    }

    cout << endl << endl;
    while (!numbers.empty()) {
        numbers.top(item);
        cout << item << " ";
        numbers.pop();
    }
    return 0;
}