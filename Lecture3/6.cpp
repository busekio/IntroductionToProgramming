// width1.cpp
// demonstrates need for setw manipulator

#include <iostream>
//#include <conio.h>
using namespace std;

int main()
{
   long pop1=2425785, pop2=47, pop3=9761;

   cout << "LOCATION " << "POP." << endl
        << "Por " << pop1 << endl
        << "Hightown " << pop2 << endl
        << "Lowville " << pop3 << endl;
   //system("pause");     
   return 0;
}
