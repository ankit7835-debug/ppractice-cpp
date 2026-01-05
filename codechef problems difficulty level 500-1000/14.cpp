/*
Chef and his Apps
Chef's phone has a total storage of 
S
S MB. Also, Chef has 
2
2 apps already installed on his phone which occupy 
X
X MB and 
Y
Y MB respectively.

He wants to install another app on his phone whose memory requirement is 
Z
Z MB. For this, he might have to delete the apps already installed on his phone. Determine the minimum number of apps he has to delete from his phone so that he has enough memory to install the third app.*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    if(!(cin >> T)) return 0;
    while (T--) {
        int S, X, Y, Z;
        cin >> S >> X >> Y >> Z;
        int free = S - X - Y;
        if (free >= Z) {
            cout << 0 << '\n';
        } else if (S - X >= Z || S - Y >= Z) {
            cout << 1 << '\n';
        } else {
            cout << 2 << '\n';
        }
    }
    return 0;
}
