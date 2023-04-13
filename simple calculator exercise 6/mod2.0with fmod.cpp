#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main (){
	
	char oper;
	float number1, number2, rem;

	cin >> number1 >> oper >> number2;
	
	switch(oper){
		case '+':
			cout << "Entered Expression: " << number1 << " + " << number2 << " = " << setprecision(2) << fixed << number1 + number2;
			break;
		case '-':
			cout << "Entered Expression: "<< number1 << " - " << number2 << " = " << setprecision(2) << fixed << number1 - number2;
			break;
		case '*':
			cout << "Entered Expression: " << number1 << " * " << number2 << " = " << setprecision(2) << fixed << number1 * number2;
			break;
		case '/':
		if (number2 == 0)
	{
		cout << "Entered Expression: " << "Divide by Zero Error!" << endl;
	}
			cout << "Entered Expression: " << number1 << " / " << number2 << " = " << setprecision(2) << fixed << number1 / number2;
			break;
			
		case '%':
			rem = fmod(number1,number2);
			cout << rem << endl;
			if (number2 == 0)
	{
		cout << "Entered Expression: "<< "Divide by Zero Error!" << endl;
	}
			break;
		default:
		   cout << "Error!";
		   break;	
	}
	
    
    return 0;
}
