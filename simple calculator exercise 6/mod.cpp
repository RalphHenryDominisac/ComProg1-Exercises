#include <iostream>
#include <iomanip>
using namespace std;
float findMod(float number1, float number2) 
{ 
    float mod; 
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
	else {
	
		cout << (number1 / number2) << endl; }
			cout << number1 << " / " << number2 << " = " << setprecision(2) << fixed << number1 / number2;
			break;
		case '%':
			if (number2 == 0)
	{
		cout << "Divide by Zero Error!" << endl;
	}
	else{
	
		cout << (findMod(number1,number2)) << endl;}
			cout << number1 << " % " << number2 << " = " << setprecision(2) << fixed << findMod(number1, number2);
			break;
		default:
		   cout << "Error!";
		   break;	
	}
	
    
    return 0;
}
