#include <iostream>
using namespace std;

struct employee
{

int eId;
char favChar;
float salary;




};

int main(){

    struct employee ankit;
    ankit.eId = 1;
    ankit.favChar = 'c';
    ankit.salary = 120000;


     cout <<"The value is "<<ankit.eId<<endl;
     cout <<"The value is "<<ankit.favChar<<endl;
     cout <<"The value is "<<ankit.salary<<endl;



return 0;
}