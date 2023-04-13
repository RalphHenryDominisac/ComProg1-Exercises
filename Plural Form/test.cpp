#include <iostream> 
#include <fstream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;
void change_to_plural(char* input_string, char* output_string) // changing to plural
{
    int n;
    n = strlen(input_string);
    if (input_string[n - 1] == 'y') //ends with y
    {
        input_string[n + 2] = '\0';
        input_string[n - 1] = 'i';
        input_string[n] = 'e';
        input_string[n + 1] = 's';

    }
    else if (input_string[n - 1] == 's' || ((input_string[n - 2] == 's') && (input_string[n - 1] == 'h'))) // ends with s or sh
    {
        input_string[n] = 'e';
        input_string[n + 1] = 's';
        input_string[n + 2] = '\0';
    }
    else //other cases
    {
        input_string[n] = 's';
        input_string[n + 1] = '\0';
    }
    output_string = input_string;
    n = strlen(input_string);
    for (int i = 0; i < n; i++)
        cout << output_string[i];
}


int main() {

    char in[10], out[10];
    string k = "EXIT";
   
        for (int i = 0; i != '0'; i++)
        {
            
            cin >> in;
           if (in == k){
           	return 0;
		   }
            cout << "Its plural is : ";
            change_to_plural(in, out);
            cout << endl;
        }
   
}
