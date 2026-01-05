// C++ program to convert ASCII to char
#include <iostream>
using namespace std;

int main()
{

    
    int asciiValue1 = 65;
    int asciiValue2 = 66;

   
    char character1 = (char)asciiValue1;
    cout << "The character for ASCII value " << asciiValue1
         << " is " << character1 << endl;

    char character2 = char(asciiValue2);
    cout << "The character for ASCII value " << asciiValue2
         << " is " << character2 << endl;

    return 0;
}