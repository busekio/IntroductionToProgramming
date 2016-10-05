 // charvars.cpp
// demonstrates character variables
#include <iostream>        //for cout, etc.
//#include <conio.h>
using namespace std;

int main()
{
   char ch3,ch1 = 'A';    //define char variable as character
   char ch2 = '\t';   //define char variable as tab
   
   ch3 = 'B';         //set char variable to char constant
   cout << ch1<< ch2<<'\t'<<"\t"<<ch3<< endl ;       //display character
    system("pause");        
  
   return 0;
}
