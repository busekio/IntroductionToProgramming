// fahren.cpp
// demonstrates cin, newline
#include <iostream>
//#include <conio.h>
using namespace std;

int main()
{
   float ftemp,ctemp;  //for temperature in fahrenheit

   cout << "Sicaklik \"fahrenheit\" giriniz ";
   cin >> ftemp;
   //ctemp = (ftemp-32) * ((float)5 / 9);  
   
   ctemp = (ftemp-32) * (static_cast<float>(5) / 9);  
 
 
  cout << "Celsius olarak: " << ctemp << endl;
   system("pause");
   return 0;
} 
