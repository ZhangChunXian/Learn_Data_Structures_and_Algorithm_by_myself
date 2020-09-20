#include <iostream>
using namespace std;

class complex
{
    public:
        complex();
        complex(double real, double imag);

    public:
        // 声明运算符重载
        complex operator+ (const complex &A) const;
        void display() const;
    private:
        double m_real;          //实部
        double m_imag;          //虚部
};

complex::complex():