#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 
                      40, 50};

    // Defining reverse iterators 
  	// pointing to the reverse 
  	// beginning of vec
    auto it = vec.rbegin();

    // Iterating the whole 
    // vector in reverse
    while (it != vec.rend()) {
        cout << *it << " ";
        it++;
    }

    return 0;
}