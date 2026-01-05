#include <iostream>
using namespace std;
int main(){
   int var = 5;
   int* point_var = &var;

   cout<< "value pointed bt point var"<<*point_var<< endl;
   cout<<"address of var" <<&var<<endl;

return 0;
}