// fahren.cpp
// demonstrates cin, newline
#include <iostream>

using namespace std;

int main()
{
   int fSicaklik,cSicaklik;  //for temperature in fahrenheit

   cout << "Sicaklik \"fahrenheit cinsinden\" giriniz \n";
   cin >> fSicaklik;
   cSicaklik = (fSicaklik-32) * 5 / 9;  
 
   cout << "Celsius olarak: " << cSicaklik << " C dir"<<endl;
   system("pause");
   return 0;
} 
