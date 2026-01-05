/*
Chef has 
N
N candies. He has to distribute them to exactly 
M
M of his friends such that each friend gets equal number of candies and each friend gets even number of candies. Determine whether it is possible to do so.

NOTE: Chef will not take any candies himself and will distribute all the candies.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	
while(t--){
    
    int n,m;
    
    cin>>n>>m;
    
    
        if(n % m == 0 && (n / m) % 2 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}