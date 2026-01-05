#include <iostream>
using namespace std;


bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int num;
        cin >> num;  

        if (isEven(num)) {
            cout << "Even" << endl;
        } else {
            cout << "Odd" << endl;
        }
    }

    return 0;
}
