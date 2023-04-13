#include <iostream>
#include <iomanip>
using namespace std;
double findMod(double number1, double number2) 
{ 
    double mod; 
    // This is for negative values 
    if (number1 < 0) 
        mod = -number1; 
    else
        mod =  number1; 
    if (number2 < 0) 
        number2 = -number2; 
  
    // This is for repeated subtraction 
      
    while (mod >= number2) 
        mod = mod - number2; 
  
    if (number1 < 0) 
        return -mod; 
  
    return mod; 
} 
  
int main (){
	
	char oper;
	double number1, number2;
	
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
			cout << number1 << " / " << number2 << " = " << setprecision(2) << fixed << number1 / number2;
			break;
		case '%':
			cout << number1 << " % " << number2 << " = " << setprecision(2) << fixed << findMod(number1, number2);
			break;	
	}
	
    if (number2 == 0 && number1 / number2){
    	cout << "Divide by Zero Error!" << endl;
	}
	
	if (number2 == 0 && findMod(number1, number2)){
    	cout << "Divide by Zero Error!" << endl;
	}
    return 0;
}
