#include <iostream>
#include <conio.h>
using namespace std;

int main()
   {
   char ch1=getch();               
      
   cout << "ASCI karsiligi:"<< static_cast<int>(ch1);
   
   // (int)ch1 C standard� tip d�n��t�rme ifadesidir

   //cout << ch1 <<"nin ASCII degeri="<<(int)ch1<< endl;   
   
   
   system("pause");
   return 0;
   }
