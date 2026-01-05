#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    for (int x : arr) {
        if (x > 10) {
            continue;  
        }
        cout << x * x << endl;  
    }

    return 0;
}
