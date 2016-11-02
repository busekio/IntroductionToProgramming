#include <iostream>
using namespace std;

int main()
{
   int vize,fin;

   cout << "vize ve final giriniz: ";
   cin >> vize >> fin;
   
   float ortalama=vize*.4+fin*.6;
   
   cout<<"ortalamaniz:"<<ortalama;
   
   
   if ( ortalama >= 90 )       // 90 - 100    
      cout << "A";
   else if (ortalama >= 80 )  // 80-89   
        cout << "B";
   else if (ortalama >= 70 )  // 70-79   
        cout << "C";  
   else if (ortalama >= 60 )  // 60-69   
        cout << "D";
   else if (ortalama >= 50 )     
        cout << "E";
   else                     // 0 - 60   cout << "F";
        cout<<"F";
   
   system("pause");
   return 0;
}
