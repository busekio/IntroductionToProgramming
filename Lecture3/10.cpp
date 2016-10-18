// Aritmetik atama işleçleri

#include <iostream>

using namespace std;

int main()
{
   int a = 27;
   a += 10;              // a = a + 10;
   cout << a << ", ";
   a -= 7;               //  a = a - 7;
   cout << a << ", ";
   a *= 2;               // a = a * 2;
   cout << a << ", ";
   a /= 3;               // a = a / 3;
   cout << a << ", ";
   a %= 3;               // a = a % 3;
   cout << a << endl;
   
   int x=0; a=1;
   
   x= ++a + 5;
   cout<<endl<<x<<':'<<a;
   x= 0; a=1;
   x= a++ + 5;
   cout<<endl<<x<<':'<<a;

   cin.get();cin.get(); // Akışı duraklatma
   return 0;
}
