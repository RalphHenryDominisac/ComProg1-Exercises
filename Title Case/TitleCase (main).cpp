#include <iostream>
#include <string>
#include <cstring>
using namespace std;



void setCase (char []);

int main()
{

   char inputString[100];
   string stop = "0";
   
     for (int i = 0; inputString != '\0'; i++){
     	
        cin.getline(inputString, 100); 
           if (inputString == stop){
           	return 0;
		   }
		   
        setCase(inputString);
}



 return 0;
}



void setCase (char input[])
{
	
	input[0] = toupper(input[0]);

   for (int i = 1; i < 100; i++)
   {
   	
        if ( input[i - 1] == '-' ){
            input[i] = toupper(input[i]);
        }
        
        
        
        
   if ( input[i - 1] == ' ' ){
		
    input[i] = toupper(input[i]);
    
    }
        
       
        
   }
    
    
    	cout << input << endl;
    	

  
    
        
   
}
	
	


