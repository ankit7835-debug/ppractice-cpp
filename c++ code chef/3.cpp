#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int A, B;
        cin >> A >> B;

        int val1 = A * 10;  
        int val2 = B * 5;  

        if (val1 > val2)
            cout << "FIRST" << endl;
        else if (val1 < val2)
            cout << "SECOND" << endl;
        else
            cout << "ANY" << endl;
    }

    return 0;
}
