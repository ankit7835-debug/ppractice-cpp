#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxLen = 0;
    int currentLen = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            currentLen++;           
            maxLen = max(maxLen, currentLen);  
            currentLen = 0;       
        }
    }  

    cout << maxLen << endl;

    return 0;
}
