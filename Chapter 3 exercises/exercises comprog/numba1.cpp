#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    float g1,g2,g3,g4,g5;
    float t1,t2,t3,t4,t5;
    char slash;
    float labGrade;
    
    cin >> g1 >> slash >> t1;
    cin >> g2 >> slash >> t2;
    cin >> g3 >> slash >> t3;
    cin >> g4 >> slash >> t4;
    cin >> g5 >> slash >> t5;
    
    labGrade = ((g1+g2+g3+g4+g5)/(t1+t2+t3+t4+t5)) * 60 + 40;
    
    cout << setprecision (2) << fixed << "The Lab grade is " << labGrade;
    
    return 0;
