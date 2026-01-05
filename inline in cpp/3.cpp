#include <iostream>
using namespace std;
float moneyReceived(int currentMoney,float factor = 1.04){
    return currentMoney* factor;

}
int main(){
    int money = 10000;
    cout<<"if you have "<<money<<"Rs in your bank account , you will recive"<<moneyReceived(money)<<"Rs after 1 year";
        cout<<" for VIP:if you have "<<money<<"Rs in your bank account , you will recive"<<moneyReceived(money,10)<<"Rs after 1 year";


return 0;
}