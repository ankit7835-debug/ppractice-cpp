#include <bits/stdc++.h>
using namespace std;


class GfG {
public:

    // Data member
    int val;
    
    // Member function
    void show() {
        cout << "Value: " << val << endl;
    }
    
};

int main() {
    
    GfG obj;
    
    
    obj.val = 10;
   
    obj.show();
    
    return 0;
}