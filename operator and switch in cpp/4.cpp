#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 2 || N == 3 || N == 5 || N == 7)
        cout << "prime number" << endl;
    else
        cout << "non-prime number" << endl;

    return 0;
}
