#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n) {
    if (n == 0) return 1;
    int digit = 0;
    while (n > 0) {
        digit++;
        n /= 10;
    }
    return digit;
}


void isArmstrongNumber(int num) {
    int original = num;
    int digits = countDigits(num);
    int sum = 0;

    int temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);  
        temp /= 10;
    }

    if (num == 0) sum = 0;

    if (sum == original)
        cout << "YES\n";  
        cout << "NO\n";
}

int main() {
    int n;
    cin >> n;

    isArmstrongNumber(n);
    return 0;
}
