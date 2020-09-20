#include <iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        int inches;

    public:
        // Construct the function needed
        Distance()
        {
            feet = 0;
            inches = 0;
        }

        Distance(int f, int i)
        {
            feet = f;
            inches = i;
        }

        // 显示距离的方法
        void displayDistance()
        {
            cout << "F: " << feet << " I: " << inches << endl;
        }

        // 重载负运算符（-）
        Distance operator-()
        {
            feet = -feet;
            inches = -inches;
            return Distance(feet, inches);
        }
};

int main()
{
    Distance D1(11, 10), D2(-5, 11);

    -D1;                      // 取相反数
    D1.displayDistance();     // 距离 D1

    -D2;
    D2.displayDistance();     // 距离 D2

    return 0;
}