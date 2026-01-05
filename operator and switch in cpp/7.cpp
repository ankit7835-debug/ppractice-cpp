#include <iostream>
using namespace std;

int main() {
    int num = 6;
    switch(num) {
        case 3:
            cout << "Three";
            break;
        case 6:
            cout << "Six";
        case 9:
            cout << "Nine"; 
            break; 
        default:
            cout << "Default";
    }
}