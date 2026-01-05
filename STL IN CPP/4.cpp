#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {30, 10, 40, 
                      10, 50};
  	multiset<int> ms = {10, 30, 10, 
  	                   20, 40, 10};

    // Using the std::count() algorithm to count
  	// the number of occurences of 10 in vector
  	// and multiset using iterator
  	cout << "10s in Vector: " 
  	     << count(vec.begin(),
            vec.end(), 10) << endl;
  	cout << "10s in Multiset: " 
  	     << count(ms.begin(),
            ms.end(), 10);

    return 0;
}