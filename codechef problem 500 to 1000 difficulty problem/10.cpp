#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a;
    cin>>a;

    if ((a%3)==0)
    {
    cout<<"normal" <<endl;

    }
    else if ((a%3)==1)
    {
        cout<<"huge" <<endl;
    }
    else
    {
        cout<<"small" <<endl;
    }
    
    
    
}
return 0;
}