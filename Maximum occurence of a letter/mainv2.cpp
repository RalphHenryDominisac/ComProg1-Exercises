#include <iostream>
#include<bits/stdc++.h>
#include <string>
#define ASCII_SIZE 9999
using namespace std;

char maximumCharacter(char* letterStr)
{
int count[ASCII_SIZE] = {0};
int maximum = 0;
 
char resultValue; 
int lengthString = strlen(letterStr);

   for (int i = 0; i < lengthString; i++) 
     {
        count[letterStr[i]]++;
   if (maximum < count[letterStr[i]]) 
          {
        maximum = count[letterStr[i]];
        
          resultValue = letterStr[i];
          }
     }
     
     
     

cout << resultValue << " = " << maximum << endl;




}
  

int main()
{   
     char lineString[99999];
     
     string acquiredMessage;
     
     cin.getline(lineString, sizeof(lineString)); 
     maximumCharacter(lineString);
      
       cin >> acquiredMessage;
       

         if (acquiredMessage == "quit"){
   	         return 0;
                        }
   
       return 0;
}


