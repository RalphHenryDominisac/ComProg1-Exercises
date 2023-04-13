#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector<string> result; // Storage of the result
  bool isConsonant(char letter) {
    if(letter!='a' && letter!='e' && letter!='i' && letter!='o' && letter!='u')
	    {              
        return true;
        }
    else {
   return false;
         }
}

void formPlural(string strLetter)    
{
  int lengthCount = strLetter.length();     // a. If the word ends in s, ss, sh, ch, x, z add es to the word.
        if(strLetter.at(lengthCount-1) == 's' || strLetter.at(lengthCount-1) =='h' || strLetter.at(lengthCount-1) =='x' || strLetter.at(lengthCount-1) =='z')
		{
          strLetter.append("es");
          
          
             result.push_back(strLetter);
        }



else if(strLetter.at(lengthCount-1) =='y')   // b. If the word ends in y and and the letter before the y is a consonant, change the y to ies.
{
   if(isConsonant(strLetter.at(lengthCount-2)))
   {
       strLetter.replace(lengthCount-1,1,"ies");
       
       result.push_back(strLetter);
   }
}





else if(strLetter.at(lengthCount-1) =='n' && strLetter.at(lengthCount-2) =='o') // c. If the word ends with on, change 'on' to 'a'.  
       // n first before o since it would result like e.g. -> criterion into criterions
    {
  
   strLetter.replace(lengthCount-2,2,"a");
   
   
   
   
   result.push_back(strLetter);
    
	}





else // d. In all other cases, add just an s.
     {
 
   strLetter.append("s");
   
   result.push_back(strLetter);
    }
    
    
}




int main() 
{
	
   string inputWord;
   for (int i = 0; inputWord != "0"; i++){
   	
           cin>>inputWord;
           
       if (inputWord == "EXIT"){
       	
       	return 0;
       	
	   }
    
      formPlural(inputWord);
      
      cout << result[i] << endl;
}

return 0;
}
