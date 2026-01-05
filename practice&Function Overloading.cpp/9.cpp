#include <iostream>
using namespace std;
 int volume(double r,int h){
    return(3.14*r*r*h);
 }
 int volume(int a){
    return (a*a*a);
 }
 int volume(int l,int b,int h){
return (l*b*h);

 }

int main(){

    cout<<"the volume of cylinder is"<<volume(3,6)<<endl;
    cout<<"the volume of cube is"<<volume(3)<<endl;
    cout<<"the volume of  rectunglar box is"<<volume(3,6,7)<<endl;

return 0;
}