// C++ Program to convert char* to string
// using std::copy() and std::back_inserter()
#include <bits/stdc++.h>
using namespace std;

int main() {
    const char *cstr = "Welcome to GeeksForGeeks";
  	int n = strlen(cstr);

    
    string str;

    
    copy(cstr, cstr + n, back_inserter(str));

    cout << str;
    return 0;
}