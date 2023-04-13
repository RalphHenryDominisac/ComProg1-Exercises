#include <iostream>
#include <iomanip>
using namespace std;

char mealCode;
int orderCount;

const double A = 45;
const double B = 50;
const double C = 55;
const double D = 60;
const double E = 75;

double subtotal = 0;
double total = 0;




int main (){
	
	
	while(mealCode != '0'){
	
	cin >> mealCode >> orderCount;
		
		switch (mealCode)
		{
		
		case 'A':
			subtotal = orderCount * A + subtotal;
			cout << "Subtotal is "<< setprecision(2) << fixed << subtotal << endl;
			break;
		case 'B':
			subtotal = orderCount * B + subtotal;
			cout << "Subtotal is " << setprecision(2) << fixed << subtotal << endl;
			break;
		case 'C':
			subtotal = orderCount * C + subtotal;
			cout << "Subtotal is " << setprecision(2) << fixed << subtotal << endl;
			break;
		case 'D':
			subtotal = orderCount * D + subtotal;
			cout << "Subtotal is " << setprecision(2) << fixed << subtotal << endl;
			break;
		case 'E':
			subtotal = orderCount * E + subtotal;
			cout << "Subtotal is " << setprecision(2) << fixed << subtotal << endl;
			break;
			
			
	}
	
           	}
           	
           		
		total = subtotal;
		cout << "Total Amount is Php" << total << endl; 
		
		
		
	
	
	
	return 0;
}
