#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int accountNumber;
	char type;
	double minutes;
	double minutes2;
	double rdueFree;
	double totalDue;
	double minutesDay;
	double minutesNight;
	double chargeRegular;
	double chargeRegularTotal;
	double a;
	double b;
	double c;
	double d;
	
	double chargePremiumDay;
	double chargePremiumTotalDay;
	
	double chargePremiumNight;
	double chargePremiumTotalNight;

	
	double freeMinutes;
	double dayMinutes;
	double nightMinutes;
	
	
	 cin >> accountNumber;
	 
	 cin >> type;
	 if (type == 'x') {
	     cout << "Invalid Service Type";
	     return 0;
	 }
	 
	 cin >> minutes;
	 if (type == 'p' || type == 'P') {
	 
	 cin >> minutes2; }
	 
	
	


cout << "Account Number: ";                     //Account Number
    cout << accountNumber << endl;

cout << "Type of Service: ";                  // Type of Service
     
     switch (type){
     	case 'r':
     		cout << "Regular" << endl;
     		break;
     	case 'R':
     		cout << "Regular" << endl;
     		break;
     	case 'p':
     		cout << "Premium" << endl;
     		break;
     	case 'P':
     		cout << "Premium" << endl;
     		break;
     	
	}

  
     
if (type == 'r' || type == 'R') {                            //Number of minutes for type r or R
cout << "Number of minutes: ";
    cout << setprecision(2) << fixed << minutes << endl; }
    
if (type == 'p' || type == 'P') {                           // Number of minutes for type p or P
cout << "Number of minutes during the day: ";
    cout << setprecision(2) << fixed << minutes << endl; 
	cout << "Number of minutes during the night: ";
    cout << setprecision(2) << fixed << minutes2 << endl; 
	
	}
    
    
    
    


cout << "Total Amount Due: ";
if (minutes >= 0 && minutes <=50 && type == 'r') {                  // Amount due for type r or R
    rdueFree = 10.00;
    cout << setprecision(2) << fixed << "$" << rdueFree << endl; }
    
if (minutes > 50 && type == 'r') {
    freeMinutes = 50.00;
    a = minutes - freeMinutes;
    chargeRegular = a * 0.20;
    chargeRegularTotal = chargeRegular + 10;
   cout << setprecision(2) << fixed << "$" << chargeRegularTotal << endl; }
   
if (minutes >= 0 && minutes <=50 && type == 'R') {
    rdueFree = 10.00;
    cout << setprecision(2) << fixed << "$" << rdueFree << endl; }
    
if (minutes > 50 && type == 'R') {
    freeMinutes = 50.00;
    a = minutes - freeMinutes;
    chargeRegular = a * 0.20;
    chargeRegularTotal = chargeRegular + 10;
   cout << setprecision(2) << fixed << "$" << chargeRegularTotal << endl; }
   





                                                                           // Amount due for type  p or P
if (minutes >= 0 && minutes <= 75 && type == 'p' || type == 'P' ) {
       minutesDay = 25.00;
         }

if (minutes >= 75 && minutes <= 99 && type == 'p' || type == 'P' ) {
	dayMinutes = 75.00;
	b = minutes - dayMinutes;
	chargePremiumDay = b * 0.10;
 }

if (minutes2 >= 0 && minutes2 <= 100 && type == 'p' || type == 'P' ) {
    minutesNight = 25.00;
    d = minutesDay - minutesNight + 25;
    cout << setprecision(2) << fixed << "$" << d << endl; }

if (minutes2 > 100  && type == 'p' || type == 'P' ) {
    nightMinutes = 100.00;
    c = minutes2 - nightMinutes;
	chargePremiumNight = c * 0.05;
	chargePremiumTotalNight = chargePremiumDay + chargePremiumNight + 25;
	cout << setprecision(2) << fixed << "$" << chargePremiumTotalNight << endl; }
    
	

    
    
    
    
   


    
	
	
	
	
	
	
	
	return 0;
}
