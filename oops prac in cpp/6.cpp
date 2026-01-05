#include <iostream>
using namespace std;

class GfG {
public:
    static int val;
};


int GfG::val = 22;
int main() {
    
   
    cout << GfG::val << endl;
}