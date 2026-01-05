/*
here are 
X
X levels remaining in the game, and each level takes Chef 
Y
Y minutes to complete. To protect against eye strain, Chef also decides that every time he completes 
3
3 levels, he will take a 
Z
Z minute break from playing. Note that there is no need to take this break if the game has been completed.

How much time (in minutes) will it take Chef to complete the game?*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    int breaks=x/3;
	    if(x%3==0)
	     breaks--;
	     
	    int ans=x*y;
	    ans+=z*breaks;
	    cout<<ans<<endl;
	}
	return 0;
}