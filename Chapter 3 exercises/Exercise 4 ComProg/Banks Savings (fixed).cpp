#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	
	// DOMINISAC - Bank Savings 
	
	
	float bb,ir;
	char percent;
	float endingBalanceone, endingBalancetwo, endingBalancethree, endingBalancefour;
	float beginningBalance;
	float per1, per2, per3, per4;
	float interestEarned;
    
	
	cin >> bb >> ir >> percent;
	
	per1 = ir / 100;
	per2 = ir / 100;
	per3 = ir / 100;
	per4 = ir / 100;
	
	
	endingBalanceone = bb * per1 + bb;
	endingBalancetwo = endingBalanceone * per2 + endingBalanceone;
	endingBalancethree = endingBalancetwo * per3 + endingBalancetwo;
	endingBalancefour = endingBalancethree * per4 + endingBalancethree; 
	
	interestEarned = endingBalancefour - bb;
	
	
	cout << setprecision (2) << fixed << endingBalanceone << endl;
	cout << setprecision (2) << fixed << endingBalancetwo << endl;
	cout << setprecision (2) << fixed << endingBalancethree << endl;
	cout << setprecision (2) << fixed << endingBalancefour << endl;
	
	cout << setprecision (2) << fixed << "Interest earned is " << interestEarned << endl;
	
	

	
	
	
	
	
	
	return 0;
}
