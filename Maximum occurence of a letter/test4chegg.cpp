#include <iostream>
#include<bits/stdc++.h>
#define ASCII_SIZE 1024
using namespace std;

char getMaxOccuringChar(char* str)
{
// Create array to keep the count of individual
// characters and initialize the array as 0
int count[ASCII_SIZE] = {0};
  
// Construct character count array from the input
// string.
int len = strlen(str);
int max = 0; // Initialize max count
char result; // Initialize result
  
// Traversing through the string and maintaining
// the count of each character
for (int i = 0; i < len; i++) {
count[str[i]]++;
if (max < count[str[i]]) {
max = count[str[i]];
result = str[i];
}
}
cout << result << " = " <<max << endl;
//return result;
}


  
// Driver program to test the above function
int main()
{   
char str[1000];
string choice;
cout << "Please enter string :" << endl;
cin.getline(str, sizeof(str)); //taking string input
getMaxOccuringChar(str);
  
   cin >> choice;

   if (choice == "quit"){
   	return 0;
   }
   
       return 0;
}