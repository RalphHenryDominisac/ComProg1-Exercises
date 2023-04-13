#include <iostream>
#include <string>
using namespace  std;

int main() {
	
	int cards_in_hand;
int value, total_value = 0;
string card_value;  //card_value should be string

cout << "Enter the number of cards: ";
cin >> cards_in_hand;


cout << "Enter cards: ";
cin >> card_value;

//Strings are 0 based indexed,so n must be initially 0
for (int n = 0; n < cards_in_hand; n++)
{

    switch (card_value[n])
    {
    case'2':
        value = 2;
        total_value = value + total_value;
        break;
    case '3':
        value = 3;
        total_value = value + total_value;
        break;
    case '4':
        value = 4;
        total_value = value + total_value;
        break;
    case '5':
        value = 5;
        total_value = value + total_value;
        break;
    case '6':
        value = 6;
        total_value = value + total_value;
        break;
    case '7':
        value = 7;
        total_value = value + total_value;
        break;
    case '8':
        value = 8;
        total_value = value + total_value;
        break;

    case '9':
        value = 9;
        total_value = value + total_value;
        break;
    case 't':
    case 'T':
        value = 10;
        total_value = value + total_value;
        break;

    case 'j':
    case 'J':
        value = 10;
        total_value = value + total_value;
        break;
    case 'q':
    case 'Q':
        value = 10;
        total_value = value + total_value;
        break;
    case 'k':
    case 'K':
        value = 10;
        total_value = value + total_value;
        break;
    case 'a':
    case 'A':
        if (total_value <= 10)
        {
            value = 11;
        }
        else
        {
            value = 1;
        }
        total_value = total_value + value;
       // n++; remove this line as you are doing already incrementing in loop statement
    }


}

if (total_value <= 21)
{
    cout << "The value of your hand is: " << total_value << endl;
}
else
    cout << "YOU ARE BUSTED!\n";
    
    
 return 0;   
    
}

