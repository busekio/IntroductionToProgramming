#include <iostream>
#include <conio.h>
using namespace std;

int main()
   {
   char ch1=getch();               
      
   cout << "ASCI karsiligi:"<< static_cast<int>(ch1);
   
   // (int)ch1 C standardý tip dönüþtürme ifadesidir

   //cout << ch1 <<"nin ASCII degeri="<<(int)ch1<< endl;   
   
   
   system("pause");
   return 0;
   }
