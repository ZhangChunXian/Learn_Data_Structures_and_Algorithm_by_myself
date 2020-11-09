#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int a[100] = { 0 };

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}