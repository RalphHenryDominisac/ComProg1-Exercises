#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 
char maximumOccuringCharacter(char str[]) 
{ 
  
    char maxCharacter; 
    
    int freqLetter[26] = { 0 }; 
    int lengthString = strlen(str); 
    int maximum = -1;
    
  
  
  
  
    for (int i = 0; i < lengthString; i++) 
        freqLetter[str[i] - 'a']++; 
  
  
  
  
    for (int i = 0; i < 26; i++) 
        if (maximum < freqLetter[i]) { 
            maximum = freqLetter[i]; 
            maxCharacter = (char)(i + 'a'); 
        } 
  
   
   
   
   
   
    cout << maxCharacter << " = " << maximum << endl;    // returns the maximum occuring letter and the number of occurences of it.
} 
  
int main() 
{ 
    char str[999]; 
    string acquiredString;
    
    
    cin.getline(str,999);
    
    maximumOccuringCharacter(str); 
    
    cin >> acquiredString;
    
    if (acquiredString == "quit"){
   	return 0;
   	
   }
    
    
    
    return 0; 
} 

