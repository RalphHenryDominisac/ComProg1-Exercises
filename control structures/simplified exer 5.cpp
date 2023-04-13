#include <iostream>
using namespace std;
int main ()
{
	int card1;
	int card2;
	int card3;
	int card4;
	int card5;
	int card6;
	
	cin >> card1 >> card2 >> card3;
	cin >> card4 >> card5 >> card6;
	
	if (card1 == 10 && card2 + card3 <= 10)
	card1 = 11;
	if (card2 == 1 && card1 + card3 <=10)
	card2 = 11;
	if (card 3 == 1 && card1 + card 2 <=10)
	card3 = 11;
	
	
	
	
	
	
	
	{
	if (card1 >= 10 && card2 + card3 >= 10)
	cout << "The card value is: 21" << endl;
    }
    
    {
    	if (card4 == 1 && card5 + card6 >= 10)
    	cout << "The card value is: 21" << endl;
	}
