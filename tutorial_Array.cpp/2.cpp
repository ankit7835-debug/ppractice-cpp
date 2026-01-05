#include <iostream>
#include <limits.h>
using namespace std;
int main(){
int num[] = {1, 2, 3, -4, -5};
int size = 5;
 

int smallest = INT_MAX;
int largest = INT_MIN;
for (int i = 0; i < size; i++)
{

    smallest = min(smallest, num[i]);
    largest = max(largest, num[i]);
}

cout << "Smallest " << smallest << endl;
cout << "Largest " << largest << endl;

return 0;
}