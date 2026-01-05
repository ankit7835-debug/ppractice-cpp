// C++ program to convert the single character
// to string using string::push_back() or
// string::append()
#include <bits/stdc++.h>
using namespace std;

int main() {
    char c1 = 'A';
  	char c2 = '#';

    string s1;
  	string s2;

    s1.push_back(c1);
  
  	
  	s2.append(1, c2);
  

    cout << s1 << endl;
  	cout << s2;
    return 0;
}