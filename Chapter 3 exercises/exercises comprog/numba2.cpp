#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	
	float g1, g2, g3, g4 ,g5;
	float w1, w2, w3, w4, w5;
	char dash;
	char percent;
	float termGrade;
	
	 
	cin >> g1 >> dash >> w1 >> percent;
	cin >> g2 >> dash >> w2 >> percent;
	cin >> g3 >> dash >> w3 >> percent;
	cin >> g4 >> dash >> w4 >> percent;
	cin >> g5 >> dash >> w5 >> percent;
	
	
	termGrade = (g1 * (w1 / 100)) + (g2 * (w2 / 100)) + (g3 * (w3 / 100)) + (g4 * (w4 / 100)) + (g5 * (w5 / 100));
	
	cout << setprecision(2) << fixed << "The Term grade is " << termGrade << endl;
	
	
	
	
	return 0;
	
	
	
}

