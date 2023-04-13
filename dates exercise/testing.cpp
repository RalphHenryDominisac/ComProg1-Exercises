

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

string Months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};

int main(void)
{
   int m;
  
   cout << "What month were you born? (1-12)";
   cin >> m;
   cout << "So, you were born in the month of " << Months[m-1]<< "\n\n"; // subtract 1 from input, since arrays start at 0
   return 0;
}
