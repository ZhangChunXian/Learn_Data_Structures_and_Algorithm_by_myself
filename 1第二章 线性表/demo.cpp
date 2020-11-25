#include <iostream>
using namespace std;

int main()
{
    int errNumb = 0;
    int *const curErr = &errNumb;
    const int i = -1, &r = 0;

    const double pi = 3.14159;
    const double *const pip = &pi;

    cout << *curErr << endl;

    return 0;
}