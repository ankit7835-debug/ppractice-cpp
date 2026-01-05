/*Police and Thief
Chef discovered that his secret recipe has been stolen. He immediately informs the police of the theft.

It is known that the policeman and thief move on the number line. You are given that:

The initial location of the policeman on the number line is 
X
X and his speed is 
2
2 units per second.
The initial location of the thief on the number line is 
Y
Y and his speed is 
1
1 unit per second.
Find the minimum time (in seconds) in which the policeman can catch the thief. Note that, the policeman catches the thief as soon as their locations become equal and the thief will try to evade the policeman for as long as possible.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        cout << abs(X - Y) << "\n";
    }
    return 0;
}
