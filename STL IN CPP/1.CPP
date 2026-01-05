#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Defining an iterator pointing to
    // the beginning of the vector
    vector<int>::iterator first =
      v.begin();

    // Defining an iterator pointing
  	// to the end of the vector
    vector<int>::iterator last =
      v.end();
  
  	// Iterating the whole vector
  	while(first != last) {
      cout << *first << " ";
      first++;
    }
    return 0;
}