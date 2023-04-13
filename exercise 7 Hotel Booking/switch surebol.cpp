#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main () {
	char type;
	double rent;
	int discount;
	int room;
	int days;
	
	
	cin >> type >> rent >> room >> days;
	cout << "Guest type: ";        //TYPE OF GUEST
	switch (type){
	
	case 'W':
		cout << "Walk-In Guest" << endl;
		break;
	case 'P':
		cout << "Privilege Guest" << endl;
		break;
	}
	
	cout << "Cost of renting a room: ";     //COST OF RENTING A ROOM
	     cout << rent << endl;
	     
	     
	     
	cout << "Discount: ";      //DISCOUNT
	switch (discount) {
	
	   case (type == 'W' && room >=0 && room <=14 && days > 3 ):
	   cout << setprecision(2) << fixed << 5.00 << "%" <<endl;
	   break;
}

	
	
	cout << "Number of rooms booked: ";
	switch (room){
		case 1 ... 14:
			cout << room <<endl;
			break;
		case 15 ... 19:
			cout << room <<endl;
			break;
		case 20 ... 100:
		    cout << room << endl;
		    break;
			
		
	}
	
	cout << "Number of days: ";
	switch (days){
		case 1 ... 3:
			cout << days << endl;
			break;
		case 4 ... 100:
			cout << days << endl;
	
	}
	
	
	cout << "Total cost: ";
	
	if (type == 'W' && room >=0 && room <=14 && days > 3 )  
	
	           
	cout << setprecision(2) << fixed << 5.00 << "%" <<endl;
	else if (type == 'W' && room >= 0 && room <=14 && days >=0 && days <=3)
	cout << setprecision(2) << fixed << 10.00 << "%" <<endl;
	
	
	
	
	
	
	
	cout << "Total bill: ";
	
	
	
	
	
	
	
	
	return 0;
}
