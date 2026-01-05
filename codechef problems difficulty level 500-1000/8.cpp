/*
Chessboard Distance
The Chessboard Distance for any two points 
(
X
1
,
Y
1
)
(X 
1
​
 ,Y 
1
​
 ) and 
(
X
2
,
Y
2
)
(X 
2
​
 ,Y 
2
​
 ) on a Cartesian plane is defined as 
m
a
x
(
∣
X
1
−
X
2
∣
,
∣
Y
1
−
Y
2
∣
)
max(∣X 
1
​
 −X 
2
​
 ∣,∣Y 
1
​
 −Y 
2
​
 ∣).

You are given two points 
(
X
1
,
Y
1
)
(X 
1
​
 ,Y 
1
​
 ) and 
(
X
2
,
Y
2
)
(X 
2
​
 ,Y 
2
​
 ). Output their Chessboard Distance.

Note that, 
∣
P
∣
∣P∣ denotes the absolute value of integer 
P
P. For example, 
∣
−
4
∣
=
4
∣−4∣=4 and 
∣
7
∣
=
7
∣7∣=7.
*/
#include <iostream>
using namespace std;

int main() {
int t,a,b,c,d;
cin >>t;
while(t--){
    cin >>a>>b>>c>>d;
    cout <<max(abs(a-c), abs(b-d))<<endl;
}
	return 0;
}