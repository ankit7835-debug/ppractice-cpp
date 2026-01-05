#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;
        
        int required = A * B;
        int available = X * Y;
        
        if (available >= required)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
