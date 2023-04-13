#include <iostream>
#include <string>
using namespace std;
int main () {
	int year;
	int month;
	int day;
	bool isLeapYear;
	string monthString[]= {"January","February","March","April","May","June","July","August","September","October","November","December"};
	char dash = '-';
	
	
	
	isLeapYear = false;
	while (!isLeapYear)
	{
		cin >> month >> dash;
		cout << monthString[month-1] << " ";
		cin >> day >> dash;
		cout << day << ", ";
		cin >> year;
		cout << year << endl;
		
		if (year % 4 == 0 )
		{
	    if (year % 100 == 0)
	    {
	    if (year % 400 == 0)
		cout << year << " is a Leap year";
        else
        	cout << year << " is a Common year";
         }
         else
          cout << year << " is a Leap year";
         }
         else
         cout << year << " is a Common year";
         
         return 0;
        	 	
        	
		isLeapYear = true;
		
		
	}
	
	return 0;
}
