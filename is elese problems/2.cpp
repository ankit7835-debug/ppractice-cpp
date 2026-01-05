#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int x,y,h;
	cin>>x>>y>>h;
	int totalcharges;
	if(h==1){
	    totalcharges=x;
	    
	}else{
	    totalcharges= x+(h-1)*y;
	}
cout<<totalcharges<<endl;
return 0;


}
