#include<iostream>
#include <bits/stdc++.h> 

using namespace std; 
  
void retrieve(string letters) 
{ 
    for (int i = 0; i < letters.size(); i++) {
        
        if (letters[i] < 'A' || letters[i] > 'Z' && letters[i] < 'a' || letters[i] > 'z') {
           letters.erase(i, 1);  
            i--; 
        } 
        
       
    }




cout << letters << endl;




}



  

int main() 
{ 
    string letters;
    string outExit[] = "exit";
    for(letters == letters; letters != "exit";){
    cin >>letters;
    if (letters == "exit"){
	break;
}
   
    retrieve(letters); 
}

    return 0; 
} 
