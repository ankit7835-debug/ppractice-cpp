/*
Small factorials
You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1 <= n <= 100

Output
For each integer n given at input, display a line with the value of n!

Note: For larger numbers, their factorial can overflows any available numeric data type in C.*/



#include <bits/stdc++.h>
using namespace std;

void multiply(vector<int> &res, int x) {
    int carry = 0;
    for (int i = 0; i < res.size(); i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        res.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n) {
    vector<int> res;
    res.push_back(1); // factorial(0) = 1

    for (int x = 2; x <= n; x++) {
        multiply(res, x);
    }

    // print in reverse order
    for (int i = res.size() - 1; i >= 0; i--)
        cout << res[i];
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        factorial(n);
    }
    return 0;
}
