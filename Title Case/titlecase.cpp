#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

void setCase (char str[]){
	
	char title;
	title = toupper(str[0]);
	
	cout << title << endl;
	
	
}




int main (){
	char stringy[100];
	
	
	cin.getline(stringy, 100);
	
	setCase(stringy);
	
	
	
	
	
	return 0;
}
