#include <bits/stdc++.h>
using namespace std;


int calculatePower(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    cin >> base >> exponent;

    int result = calculatePower(base, exponent);
    
    cout << result << endl;

    return 0;
}
