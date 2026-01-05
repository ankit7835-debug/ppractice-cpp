#include <iostream>
#include <set>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    set<int> singleSeats = {11, 13, 15, 26, 28, 30};
    
    while (T--) {
        int N;
        cin >> N;
        string deck = (N <= 15) ? "Lower" : "Upper";
        string type = (singleSeats.count(N)) ? "Single" : "Double";
        cout << deck << " " << type << "\n";
    }
    return 0;
}
