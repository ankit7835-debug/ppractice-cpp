#include <iostream>
using namespace std;

int main() {
    int values[] = {1, 2, 3, 4, 5};
    cout << sizeof(values) / sizeof(values[0]);
}