#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void occurenceMax(char *givenStr);
 
int main()
{
  	char givenStr[100];
      
  	printf("\n Please Enter any String :  ");
  	cin.getline(givenStr, 100);
  	
  	occurenceMax(givenStr);
	
  	return 0;
}

void occurenceMax(char *givenStr)
{
	int d;
  	int maximumCount = 0;
  	
  	int count[256] = {0}; //This would probably hold the zeros
  	 	
  	for(d = 0; givenStr[d] != '\0'; d++)
  	{
  		count[givenStr[d]] = count[givenStr[d]] + 1;
	}
  		
  	for(d = 0; d < 256; d++)
  	{
		if(count[d] > count[maximumCount])
		{
			maximumCount = d;
		}
	}
	printf("\n Character %c appears Maximum of %d Times in a Given String :  %s ", maximumCount, count[maximumCount], givenStr);
}
