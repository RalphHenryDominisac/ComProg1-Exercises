#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void LetterCount(char [], int []);
int main()
{
   char StringInput[100];
   int i;
   
   int letters[26] = {0};
   cin.getline(StringInput, 100);
 
   LetterCount(StringInput, letters);
   
   
   
   
   for (i = 0 ; i < 26 ; i++){
      printf("%c = %d\n", i + 'a', letters[i]);
  }
   return 0;
}

void LetterCount(char counting[], int count[])
 {
      int x = 0;
      while (counting[x] != '\0') 
	  {
      if (counting[x] >= 'a' && counting[x] <= 'z' )
         count[counting[x]-'a']++;
                     x++;
      }

      
      
      
      
}
