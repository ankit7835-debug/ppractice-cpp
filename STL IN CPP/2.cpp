#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 
                 40, 50};

    // Iterator to the beginning 
    // of the set
    auto it = s.begin();

    // Iterating through the 
    // entire set
    while (it != s.end()) {
      
      	// Dereferencing iterator 
      	// to access value
        cout << *it << " ";
      
      	// Incrementing the 
      	// iterator
        it++;
    }
    
    return 0;
}