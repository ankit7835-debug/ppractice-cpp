#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        int total_slices = N * X;
        int pizzas = (total_slices + 3) / 4;  
        cout << pizzas << endl;
    }

    return 0;
}
