#include <iostream>
using namespace std;
int main () {
	
	int a;
	int b;
	int c;

	
	cin >> a;
	cin >> b;
	cin >> c;
	
	int ares;
	
	ares = a;
	
	while (ares <= b)
	{
		cout << ares << " "; 
		ares++;

	}
	
	cout << endl;
	
	// odd
	while (a <= c ) {
		if (a%2 != 0)
		cout << a << " ";
		a++;
		
	
	}
	
	cout << endl;
	
	
	//even
	while (b<=c){
		if (b%2 == 0)
		cout << b << " ";
		b++;
		
	}
	
	cout << endl;


	

	return 0;
}

