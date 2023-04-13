#include <iostream>
#include <iomanip>
using namespace std;
int main () {


    int day;
    int year;
	int a;
	int b;
	int c;
	int d;
	int e;

	cin >> year;
	 
	
	                            //Years between 1901 and 2100 only.
	if (year <1901 || year >2100) { 
		cout << "Error!";
	return -1;    
	}
	
	a = year % 19; // a = y mod 19
	
	b = year % 4; // b = y mod 4
	
	c = year % 7; // c = y mod 7
	
	d = (19 * a + 24) % 30; // d = (a19 + 24) mod 30
	
	e = (2 * b + 4 * c + 6 * d + 5) % 7;   // e = (2b + 4c + 6d + 5) mod 7
	
	day = 22 + d + e;     // value of d + e
	
	
	
	if (day > 31) 
	{
		cout << "April ";
		day = d + e - 9;
		if (year == 1954 || year == 1981 || year == 2049 || year == 2076) {
			day = d + e - 16; 
		}
	}
	
	
	else 
	{
		cout << "March ";
	}
	
	
	cout << day << endl; // date
	
	
	
	
	
	return 0;
}
