#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main () {
	
	// DOMINISAC - HOTEL BOOKING
	
	char type;
	int rent;
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
	switch (rent) {
		case 1 ... 9999:
			cout << rent <<endl;
			break;
	}
	cout << "Discount: ";      //DISCOUNT
	if (type == 'W' && room >=0 && room <=14 && days > 3 )                      // If Walk In and 10 or more Rooms
	cout << setprecision(2) << fixed << 5.00 << "%" <<endl;
	else if (type == 'W' && room >= 0 && room <=14 && days >=0 && days <=3)
	cout << setprecision(2) << fixed << 10.00 << "%" <<endl;
	
	
	if(type == 'W' && room >= 15 && room <= 19 && days > 3 )          // If Walk In and 15 or more rooms
	cout << setprecision(2) << fixed << 15.00 << "%" <<endl;
	else if(type == 'W' && room >= 15 && room <=19  && days >=0 && days <=3)
	cout << setprecision(2) << fixed << 20.00 << "%" <<endl;
	
	if(type == 'W' && room >= 20 && room <= 100 && days > 3)          // If Walk In and 20 or more rooms
	cout << setprecision(2) << fixed << 20.00 << "%" <<endl;
	else if(type == 'W' && room >= 20 && room <=100 && days >=0 && days <=3)
	cout << setprecision(2) << fixed << 25.00 << "%" <<endl;
	
	
	
	if (type == 'P' && room >= 0 && room <= 14 && days > 3)                      // If Privilege and 10 or more Rooms
	cout << setprecision(2) << fixed << 10.00 << "%" <<endl;
	else if (type == 'P' && room >= 0 && room <= 14 && days >=0 &&days <=3)
	cout << setprecision(2) << fixed << 15.00 << "%" <<endl;
	
	if(type == 'P' && room >= 15 && room <=19 && days > 3)          // If Privilege and 15 or more rooms
	cout << setprecision(2) << fixed << 20.00 << "%" <<endl;
	else if(type == 'P' && room >= 15 && room <=19 && days >=0 && days <=3)
	cout << setprecision(2) << fixed << 25.00 << "%" <<endl;
	
	if(type == 'P' && room >= 20 && room <= 100 && days > 3)          // If Privilege and 20 or more rooms
	cout << setprecision(2) << fixed << 30.00 << "%" <<endl;
	else if(type == 'P' && room >= 20 && room <=100 && days >= 0 && days <=3)
	cout << setprecision(2) << fixed << 35.00 << "%" <<endl;
	
	
	
	
	
	
	
	
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
	
	
	cout << "Total bill: ";
	
	
	
	
	
	
	
	
	return 0;
}
