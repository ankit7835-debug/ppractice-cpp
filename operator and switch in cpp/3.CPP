 #include <iostream>
using namespace std;

int main() {
    int A,B,C;
    cin>>A>>B>>C;
    
    if(A<B && B<C)
    {
        cout<<"increasing"<<endl;
        
    }
else if(A>B&&B>C){

    cout<<"decreasing"<<endl;
    
}
else
{
    cout<<"neither"<<endl;
    
}


}