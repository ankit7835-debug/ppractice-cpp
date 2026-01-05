/*
You are given the sequence of Nucleotides of one strand of DNA through a string 
S
S of length 
N
N. 
S
S contains the character 
A
,
T
,
C
,
A,T,C, and 
G
G only.

Chef knows that:

A
A is complementary to 
T
T.
T
T is complementary to 
A
A.
C
C is complementary to 
G
G.
G
G is complementary to 
C
C.
Using the string 
S
S, determine the sequence of the complementary strand of the DNA.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        char p[n];
        
        for( i=0; i < n ; i++){
            cin>>p[i];
            
            if(p[i]=='A') cout<<"T";
            else if(p[i]=='T') cout<<"A";
            else if(p[i]=='C') cout<<"G";
            else if(p[i]=='G') cout<<"C";
            
        }
        cout<<endl;
        
    }


}
