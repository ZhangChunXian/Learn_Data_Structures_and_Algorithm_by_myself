// constant_values1.cpp
#include <iostream>
using namespace std;

int main() {
   const int i = 5;
   i = 10;   // C3892
   i++;   // C2105
}