/*
It is My Serve
Alice and Bob are playing a game of table tennis where irrespective of the point scored, every player makes 
2
2 consecutive serves before the service changes. Alice makes the first serve of the match. Therefore the first 
2
2 serves will be made by Alice, then the next 
2
2 serves will be made by Bob and so on.

Let's consider the following example match for more clarity:

Alice makes the 
1
s
t
1 
st
  serve.
Let us assume, Bob wins this point. (Score is 
0
0 for Alice and 
1
1 for Bob)
Alice makes the 
2
n
d
2 
nd
  serve.
Let us assume, Alice wins this point. (Score is 
1
1 for Alice and 
1
1 for Bob)
Bob makes the 
3
r
d
3 
rd
  serve.
Let us assume, Alice wins this point. (Score is 
2
2 for Alice and 
1
1 for Bob)
Bob makes the 
4
t
h
4 
th
  serve.
Let us assume, Alice wins this point. (Score is 
3
3 for Alice and 
1
1 for Bob)
Alice makes the 
5
t
h
5 
th
  serve.
And the game continues 
…
…
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int p,q;
	    cin>>p>>q;
	    int s=p+q;
	    if((s/2)%2==0)
	    cout<<"Alice"<<endl;
	    else 
	    cout<<"Bob"<<endl;
	    
	    
	}
	return 0;
}