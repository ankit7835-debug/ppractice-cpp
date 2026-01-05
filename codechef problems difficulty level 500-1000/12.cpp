/*
Weights
Chef is playing with weights. He has an object weighing 
W
W units. He also has three weights each of 
X
,
Y
,
X,Y, and 
Z
Z units respectively. Help him determine whether he can measure the exact weight of the object with one or more of these weights.

If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.*/


#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,w;
    cin>>w>>a>>b>>c;
    int d = b+a;
    int e = a+c;
    int f = c+b;
    int g = a+b+c;
    if(w==a || w==b || w==c || w==d || w==e || w==f || w==g)cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
    int test;
    cin>>test;
    while(test--)solve();

    return 0;
}