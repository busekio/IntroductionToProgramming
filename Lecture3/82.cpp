// fahren.cpp
// demonstrates cin, newline
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
   char ch;  //for temperature in fahrenheit

   cout << "Karakter giriniz \n ";
   ch=getch();
   cout << "Girilen karakter: " << ch <<"sayi karsiligi: "<<(int)ch<< endl;
   system("pause");
   return 0;
} 
