// Tip dönüşümleri, değ,imezler...

#include <iostream>                     

using namespace std;

int main()
   {
   float yaricap=0.0f,alan=0.0f;                           
   const float PI = 3.14159f;           

   cout << "Dairenin yari capi: ";  
   cin >> yaricap;                          
   alan = PI * yaricap * yaricap;         
   cout << "alan degeri: " << alan << endl;

   cin.get();cin.get(); // Akışı duraklatma
   return 0;
   }
