#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 5;
    if (x > y)
        cout << "x is greater";
    else if (y >= x)
        cout << "y is greater";
    else
        cout << "Both are equal";
}