// ilişkisel işleçler. ilişkisel işlem sonucu bool tipindedir

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int sayi=0;
   //sayi=(int)pow(2.0,4.0);
   cout << "Bir sayi giriniz: ";
   cin >> sayi;
   cout << "sayi<10  ise " << (sayi < 10)  << endl;
   cout << "sayi>10  ise " << (sayi > 10)  << endl;
   cout << "sayi==10 ise " << (sayi == 10) << endl;
    
   return 0;
 }
