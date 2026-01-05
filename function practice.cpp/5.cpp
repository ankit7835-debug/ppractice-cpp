#include <iostream>
using namespace std;

// Function to check if a number is prime, return true if num is prime else false
bool isPrime(int num) {
    if(num <= 1)
    return false;
    for(int i = 2; i*i<=num;i++){
        if(num%i==0)
        return false;
        
    }
   return true;
}
// Function to print prime numbers in the range [L, R]
void printPrimesInRange(int L, int R) {
    // Complete the function.
    for(int num = L;num <= R;num++){
        if(isPrime(num)){
            cout<<num<<" ";
        }
    }
}

int main() {
    int L, R;
    cin >> L >> R;

    printPrimesInRange(L, R);

    return 0;
}
