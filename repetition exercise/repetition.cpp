#include <iostream>
using namespace std;
int main (){
	
	int x;
	int steps = 1 - 1;
	
	cin >> x;
	
	
	while (x != 1)
	{
	
		if (x%2 == 1)               // odd
		     x = (3 * x) + 1;
		     
		else                         // even
		   x = x / 2;
		   
		if (x == 0){
			cout << "Invalid input" << endl;
			return 0;
		}
		   cout <<  x << " " << endl;
		   
	steps++;
	
	}
   cout << "Steps taken = " << steps << endl;
	  
	

	
	return 0;
}
	


	
	
	
	

