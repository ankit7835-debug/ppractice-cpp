#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
        
    

    if(n<3){
        
    
        cout<<"Array should have at least 3 element"<<endl;
        return 0;
    }
    int arr[n];
     for(int i = 0;i< n;i++){
         cin>>arr[i];
     }
     int result = arr[0]*arr[2];
     cout<<result<<endl;
     
     
     
     
      
    
    

    return 0;
}