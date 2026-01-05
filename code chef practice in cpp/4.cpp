#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        int income = 50 * N;
        int profit = (income * 30) / 100;  // 30% of income
        cout << profit << endl;
    }

    return 0;
}
