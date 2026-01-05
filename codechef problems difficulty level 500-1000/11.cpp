/*
Water Mixing
Chef is setting up a perfect bath for himself. He has 
X
X litres of hot water and 
Y
Y litres of cold water.
The initial temperature of water in his bathtub is 
A
A degrees. On mixing water, the temperature of the bathtub changes as following:

The temperature rises by 
1
1 degree on mixing 
1
1 litre of hot water.
The temperature drops by 
1
1 degree on mixing 
1
1 litre of cold water.
Determine whether he can set the temperature to 
B
B degrees for a perfect bath.
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	 while(t--){
	     
	     int a,b,x,y;
	     cin >> a >> b >> x >> y;
	     if(a<=b){
	         if((a+x)>=b){
	             cout << "YES" << endl;
	         }
	         else{
	             cout << "NO" << endl;
	         }
	     }
	     else if(a>b){
	         if((a-y)<=b){
	             cout << "YES" << endl;
	         }
	         else{
	             cout << "NO" << endl;
	         }
	     
	     }
	     
	     
	     
	     
	 }
	return 0;
}