// C++ program to convert the single character
// to string using std::stringstream
#include <bits/stdc++.h>
using namespace std;

int main() {
  	char c = 'A';
    
    
    stringstream ss;

    
    ss << c;

    
    string s = ss.str();

    cout << s;
    return 0;
}