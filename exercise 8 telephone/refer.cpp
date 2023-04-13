#include<iostream>
using namespace std;
int main()
{
 char service,Regular,Premium,offer;
 int accountNum,minutes,freeminutes,a,b,c,totalbill;
 cout<<"enter the accountNum:";
 cin>>accountNum;
 cout<<"press R if you are Regular service:"<<endl;
 cout<<"press P if you are Premium service:"<<endl;
 cin>>service;
 if(service=='R'||service=='r')
 {
  cout<<"enter the minutes:";
  cin>>minutes;
  freeminutes=50;
  cout<<"$10.00 plus first 50 minutes are free"<<endl;
  a=minutes-freeminutes;
  cout<<"a="<<a<<endl;
  cout<<"charges for over 50 minutes are $0.20 per minute"<<endl;
  totalbill=a*0.20;
  totalbill=totalbill+10;
  cout<<endl<<"totalbill="<<totalbill<<endl; 
 }
 else if(service=='P'||service=='p')
 {
  cout<<"enter D if day time offer"<<endl;
  cout<<"enter N if night time offer"<<endl;
  cin>>offer;
  if(offer=='D'||offer=='d')
  {
   cout<<"enter number of minutes in day";
   cin>>minutes;
   freeminutes=75;
   cout<<"first 75 time minutes free";
   b=minutes-freeminutes;
   cout<<"b="<<b<<endl;
   cout<<"charges for more than 75 minutes are $0.10 per minute"<<endl;
   totalbill=b*0.10;
   totalbill=totalbill+25;
   cout<<"totalbill="<<totalbill;
  }
     else if(offer=='N'||offer=='n')
     {
      cout<<"enter the number of minutes in night";
      cin>>minutes;
      freeminutes=100;
      cout<<"first 100 minutes are free";
      c=minutes-freeminutes;
      cout<<"c="<<c<<endl;
      cout<<"charges for more than 100 minutes are $0.05 per minutes"<<endl;
      totalbill=c*0.05;
      totalbill=totalbill+25;
      cout<<"totalbill="<<totalbill;
     }
 }
 return 0;
} 
