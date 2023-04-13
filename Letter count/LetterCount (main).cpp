#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

char LetterCount (char str[]){
	
	int countLength = 0;
	for (int i = 0; str[i] != '\0'; i++){
		countLength++;
		
	}
	
 int counter[26]={0};
   for(int i=0; i < countLength ;i++){
       char c=str[i];
       if(c>=65 && c<='Z')
           c=c+32;
       counter[c-97]++;
   }
   for(int i=0;i<26;i++){
       char c=i+97;
       cout<<c<<"="<<counter[i]<<"," << endl;
   }
}




int main()
 {
   char StringInput[100];
   cin.getline(StringInput, 100);
   
   LetterCount(StringInput);	
   

  
  
 return 0; 
}








