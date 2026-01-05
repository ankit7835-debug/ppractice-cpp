#include <iostream>
using namespace std;

class GfG {
public:

    
    int val;
    
  
    void show() {
        cout << "Value: " << val << endl;
    }
};

int main() {
    GfG obj;
    obj.val = 42;
    obj.show();
    return 0;
}