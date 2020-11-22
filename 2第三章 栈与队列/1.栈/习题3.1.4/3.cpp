#include <iostream>
using namespace std;

int i = 100, sum = 0;

int main()
{
    double i = 1.1, *p = &i;
    double &r = *p;
    double *q = NULL;

    cout << "i = " << i << endl;
    cout << "*p = " << *p << endl;
    cout << "r = " << r << endl;

    return 0;

}