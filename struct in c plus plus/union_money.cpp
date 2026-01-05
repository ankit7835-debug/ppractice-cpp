#include <iostream>
using namespace std;

union money
{

    int rice;
    char car;
    float rupees;
};

int main()
{

    union money m1;
    m1.rice = 34;
    m1.car = 'c';

    m1.rupees = 10000;

    cout << m1.car << endl;

    return 0;
}