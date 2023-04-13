#include<iostream>
#include<cstring>
#include <string>
#include <cctype>
using namespace std;

int main (){
	
  char terminate[] = "exit";
  char messageStr[100];
  int a = 0;
  cin.get(messageStr,100);
  
	
 while (messageStr[a]){
    if (isalpha(messageStr[a])) 
	cout << messageStr[a];
    a++;
  }
  
  if (messageStr == "exit"){
  	return 0;
  }
  return 0;
}

