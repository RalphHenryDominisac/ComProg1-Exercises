#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
	float r, h, s;
	double pi; 
	float surfaceArea;
	float coneVolume;
	
	pi = 3.141592653589793238;
	
	cin >> r;
	cin >> h;
	cin >> s;
	
	surfaceArea = pi * r * s  + pi * pow(r,2);
	
	cout << setprecision (2) << fixed << "Surface Area is " << surfaceArea << endl;
	  
	
	coneVolume = pi * pow(r,2) * h / 3;
	
	cout << setprecision (2) << fixed << "Cone Volume is " << coneVolume << endl;
	 
	return 0;
	
}
