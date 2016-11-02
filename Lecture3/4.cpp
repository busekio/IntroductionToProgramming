//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     : v.1.1
// Copyright   : Your copyright notice
// Description : Tip Dönüşümleri
//============================================================================

#include <iostream>

using namespace std;

int main()
{
   float fSicaklik=0.0f;
   float cSicaklik=0.0f; 

   cout << "Sicaklik \"fahrenheit cinsinden\" giriniz \n";
   cin >> fSicaklik;
   cSicaklik = (fSicaklik-32) * ( 5.0f / 9);  
 
   cout << "Celsius olarak: " << cSicaklik << " C dir"<<endl;

   cin.get();cin.get(); // Akışı duraklatma
   return 0;
} 
