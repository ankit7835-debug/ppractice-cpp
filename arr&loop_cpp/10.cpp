 #include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i = 1;
	   
	   long long factorial = 1;
	   
	   do{
	       factorial *= i;
	       i++;
	   }
	   while(i<=n);
	   cout<<factorial<<endl;
	   
	

}