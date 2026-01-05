#include <iostream>
using namespace std;


int getSum(int x, int y = 20) {
    return x+y;
}

int main() {
    cout << getSum(5) << endl;
    cout << getSum(5, 15);

    return 0;
}