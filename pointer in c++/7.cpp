#include <iostream>
#include <string>
using namespace std;

int sumOfDigitsInString(const string& str) {
    int sum = 0;
    for (char ch : str) {
        if (isdigit(ch)) {
            sum += ch - '0';  
        }
    }
    return sum;
}

int main() {
    int T;
    cin >> T;  
    cin.ignore();  

    while (T--) {
        string input;
        getline(cin, input);  

        int result =sumOfDigitsInString(input);
        cout << result << endl;
    }

    return 0;
}
