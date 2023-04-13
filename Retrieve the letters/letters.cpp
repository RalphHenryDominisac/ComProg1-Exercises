#include <iostream>
#include<string>
using namespace std;

void retrieve();
int main() {
	
	char line[100];
	char letterStr[100];
	int j = 0;
	
	
	for(int i = 0;  line [retrieve()]!= 'exit'; ++i)
    {
        if (isalpha(line[i]))
        {
            letterStr[j++] = line[i]; 

        }
    }
    
letterStr[j] = '\0';
	
    
    
    

    
    return 0;
}

void retrieve (){
	char line[100];
	cin.getline(line,100);
	return;
}

