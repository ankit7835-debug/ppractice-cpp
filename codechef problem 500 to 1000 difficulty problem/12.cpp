#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        // If already at or above target
        if (X >= Y) {
            cout << 0 << "\n";
        } else {
            int diff = Y - X;
            // ceil division of (diff / 8)
            int games = (diff + 7) / 8;
            cout << games << "\n";
        }
    }
    return 0;
}
