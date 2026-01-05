/*
Mario and Bullet
Mario's bullet moves at 
X
X pixels per frame. He wishes to shoot a goomba standing 
Y
Y pixels away from him. The goomba does not move.

Find the minimum time (in seconds) after which Mario should shoot the bullet, such that it hits the goomba after at least 
Z
Z seconds from now.

Input Format
The first line of input will contain an integer 
T
T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing three space-separated integers 
X
,
Y
,
X,Y, and 
Z
Z.*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;  

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        
        int travelTime = Y / X;

        
        int waitTime = max(0, Z - travelTime);

        cout << waitTime << "\n";
    }

    return 0;
}
