/*
ef has 
N
N empty bottles where each bottle has a capacity of 
X
X litres.
There is a water tank in Chefland having 
K
K litres of water. Chef wants to fill the empty bottles using the water in the tank.

Assuming that Chef does not spill any water while filling the bottles, find out the maximum number of bottles Chef can fill completely.

Input Format
First line will contain 
T
T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, three integers 
N
,
X
,
N,X, and 
K
K.*/
#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n,x,k;
	    cin >> n >> x >> k;
	    int a = k/x;
	    
	    if(k>=x)
	        if(n>=a){
	            cout<<a<<endl;
	        }
	        else{
	            cout<<n<<endl;
	        }
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}