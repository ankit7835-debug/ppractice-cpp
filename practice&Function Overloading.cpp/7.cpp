#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {2, 4, 6, 8, 10};
    numbers[1] = numbers[1] * 2;
    cout << numbers[1];
}