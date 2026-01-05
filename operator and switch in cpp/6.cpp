#include <iostream>
using namespace std;

int main() {
    int day = 3;
    switch(day) {
        case 1:
        cout << "Sunday";
        break;
        case 2:
        cout << "Monday";
        break;
        case 3:
        cout << "Tuesday";
        break;
        default:
        cout << "Other day";
    }
}