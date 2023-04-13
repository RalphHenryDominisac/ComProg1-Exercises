#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main (){
	
	char oper;
	float number1, number2;
	
	cout << "Enter an expression: ";
	cin >> number1 >> oper >> number2;
	
	switch(oper){
		case '+':
			cout << number1 << " + " << number2 << " = " << setprecision(2) << fixed << number1 + number2;
			break;
		case '-':
			cout << number1 << " - " << number2 << " = " << setprecision(2) << fixed << number1 - number2;
			break;
		case '*':
			cout << number1 << " * " << number2 << " = " << setprecision(2) << fixed << number1 * number2;
			break;
		case '/':
		if (number2 == 0)
	{
		cout << "Divide by Zero Error!" << endl;
	}
	else
		cout << (number1 / number2) << endl;
			cout << number1 << " / " << number2 << " = " << setprecision(2) << fixed << number1 / number2;
			break;
			
			
		case '%':
			cout << number1 << " % " << number2 << " = " << setprecision(2) << fixed << number1 % number2;
			if (number2 == 0)
	{
		cout << "Divide by Zero Error!" << endl;
	}
			break;
		default:
		   cout << "Error!";
		   break;	
	}
	
    
    return 0;
}
