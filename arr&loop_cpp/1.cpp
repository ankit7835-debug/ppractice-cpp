#include <iostream>
using namespace std;

int main() {
	int n ;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
	    cin>>arr[i];
	    
	}
	int evensum = 0,oddsum = 0;
	 
	 for(int i = 0;i<n;i++){
	     if(i%2==0)
	     evensum += arr[i];
	     else
	     oddsum += arr[i];
	     
	 }
cout<<(evensum - oddsum)<<endl;

}
