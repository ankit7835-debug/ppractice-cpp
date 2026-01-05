/*
Blackjack
Chef is playing a variant of Blackjack, where 
3
3 numbers are drawn and each number lies between 
1
1 and 
10
10 (with both 
1
1 and 
10
10 inclusive). Chef wins the game when the sum of these 
3
3 numbers is exactly 
21
21.

Given the first two numbers 
A
A and 
B
B, that have been drawn by Chef, what should be 
3
3-rd number that should be drawn by the Chef in order to win the game?

Note that it is possible that Chef cannot win the game, no matter what is the 
3
3-rd number. In such cases, report 
−
1
−1 as the answer.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
cin >>t;

while( t--){
    int a,b;
    
    cin>>a>>b;
    int c = 21-(a+b);
    
    if(c>=1 && c <= 10){
        cout<<c<<endl;
        
    }
    
    else{
        cout<<-1<<endl;
        
    }
    
}



}
