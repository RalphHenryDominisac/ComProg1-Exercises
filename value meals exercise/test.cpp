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

double subtotalA = 0;
double subtotalB = 0;
double subtotalC = 0;
double subtotalD = 0;
double subtotalE = 0;
double total = 0;




int main (){
	
	
	while(mealCode != '0'){
	
	cin >> mealCode >> orderCount;
		
		switch (mealCode)
		{
		
		case 'A':
			subtotalA = orderCount * A;
			cout << "Subtotal is "<< setprecision(2) << fixed << subtotalA << endl;
			break;
		case 'B':
			subtotalB = orderCount * B;
			cout << "Subtotal is " << setprecision(2) << fixed << subtotalB << endl;
			break;
		case 'C':
			subtotalC = orderCount * C;
			cout << "Subtotal is " << setprecision(2) << fixed << subtotalC << endl;
			break;
		case 'D':
			subtotalD = orderCount * D;
			cout << "Subtotal is " << setprecision(2) << fixed << subtotalD << endl;
			break;
		case 'E':
			subtotalE = orderCount * E;
			cout << "Subtotal is " << setprecision(2) << fixed << subtotalE << endl;
			break;
			
			
	}
	
           	}
           	
           		
		total = subtotalA + subtotalB + subtotalC + subtotalD + subtotalE;
		cout << "Total Amount is Php" << total << endl; 
		
		
		
	
	
	
	return 0;
}
