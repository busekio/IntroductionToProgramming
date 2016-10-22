#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
struct Olcu                
{
   int metre;
   int cmetre;
};
////////////////////////////////////////////////////////////////
int main()
{
   Olcu d1, d3;            //define two lengths
   Olcu d2 = { 1, 55 }; //define & initialize one length

                               //get length d1 from user
   cout << "\nuzunluk(metre) giriniz: ";  
   cin >> d1.metre;
   cout << "uzunluk(cmetre) giriniz:: ";  
   cin >> d1.cmetre;

                               //add lengths d1 and d2 to get d3
   d3.cmetre = d1.cmetre + d2.cmetre;  //add the inches
   d3.metre = d1.metre + d2.metre;                //(for possible carry)

   if(d3.cmetre >= 100)       //if total exceeds 12.0,
   {                        //then decrease inches by 12.0
      d3.cmetre -= 100;       //and
      d3.metre++;               //increase feet by 1
   }

   cout << d1.metre << "m," << d1.cmetre << "cm + ";
   cout << d2.metre << "m," << d2.cmetre << "cm = ";
   cout << d3.metre << "m," << d3.cmetre << "cm\n";
   system("pause");
   return 0;
}

