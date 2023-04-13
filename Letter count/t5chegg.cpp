#include<iostream>
using namespace std;
int main(){
   string str;
   cout<<"Enter string: ";
   getline(cin,str);
   
   
   
   int counter[26]={0};
   for(int i=0;i<str.length();i++){
       char c=str[i];
       if(c>=65 && c<='Z')
           c=c+32;
       counter[c-97]++;
   }
   for(int i=0;i<26;i++){
       char c=i+97;
       cout<<c<<"="<<counter[i]<<",";
   }
}

      
      
      
      
      
      
      
      
