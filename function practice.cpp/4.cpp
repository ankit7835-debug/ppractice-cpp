#include <iostream>
using namespace std;

int calculateArea(int length, int width) {
    return  length*width;
    
}

int main() {
    int length, width;
    cin>>length>>width;
    

    int area = calculateArea(length, width);
    cout << area;
    
    return 0;
}