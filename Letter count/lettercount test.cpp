#include <iostream>
#include <string>
using namespace std;

char LetterCount (char str[])
{
   int i = 0, letters[26] = {0}, k;
   while (str[i] != '\0') 
        {
      if (str[i] >= 'a' && str[i] <= 'z') 
	             {
                k = str[i] - 'a';
               
                        ++letters[k];
                 }
                          ++i;
        }
   
   
   
   for (i = 0; i < 26; i++) // This would output the occurences of each letter from the string. 
   {   
   cout<< char(i + 'a')<< " : "<< letters[i]<< endl;
  
  
   }

}

int main()
 {
   char StringInput[999];
   cin.getline(StringInput, 999);
   
   LetterCount(StringInput);	
   
  
  
  
  
  
 return 0; 
}







