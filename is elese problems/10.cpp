#include <iostream>
using namespace std;

int main() {
    int a,b,c ;
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"equilateral"<<endl;
        
    }
    
    else if(a==b||b==c||a==c){
        cout<<"isosceles"<<endl;
        
        
    }
    else{
        cout<<"scalene"<<endl;
        
    }

    return 0;
}
