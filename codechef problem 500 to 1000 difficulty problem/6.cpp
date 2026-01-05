/*Flip the cards
There are 
N
N cards on a table, out of which 
X
X cards are face-up and the remaining are face-down.

In one operation, we can do the following:

Select any one card and flip it (i.e. if it was initially face-up, after the operation, it will be face-down and vice versa)
What is the minimum number of operations we must perform so that all the cards face in the same direction (i.e. either all are face-up or all are face-down)?
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        cout << min(X, N - X) << "\n";
    }
    return 0;
}
