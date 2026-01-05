#include <iostream>
using namespace std;

int main() {
	
	int  R,C,E;
	cin>>R>>C>>E;
	
	int totalrows = R + E;
	
	int totalcells = totalrows * C;
	
	cout<<totalcells <<endl;
    return 0;
    
	

}
