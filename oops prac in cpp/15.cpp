
#include <bits/stdc++.h>
using namespace std;

int main() {
    const char *cstr = "Welcome to GeeksForGeeks";

    
    string str;

  
    for (int i = 0; cstr[i] != '\0'; i++) {
        str.push_back(cstr[i]);
    }

    cout << str << endl;
    return 0;
}