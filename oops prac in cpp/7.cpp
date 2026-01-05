#include <iostream>
using namespace std;

class GfG {
public:
    static void printHello(); 
};


void GfG::printHello() {
    cout << "Hello World";
}
int main() {
    
    
    GfG::printHello();
    
    return 0;
}