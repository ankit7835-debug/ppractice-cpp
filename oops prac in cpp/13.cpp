// C++ Program to illustrate the conversion of
// char* to std::string using string::assign()
#include <bits/stdc++.h>
using namespace std;

int main() {
    const char *cstr = "Welcome to GeeksForGeeks";
    int n = strlen(cstr);

   
    string str;

    
    str.assign(cstr, cstr + n);

    cout << str;
    return 0;
}