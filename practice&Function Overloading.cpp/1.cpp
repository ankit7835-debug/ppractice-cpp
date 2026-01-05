// debug the given code
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    // Fix wrong condition and missing extra '='
    cout << ((b > a + c) && (b % 2 == 1)) << endl;

    return 0;
}
