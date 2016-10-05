// width2.cpp
// demonstrates setw manipulator
#include <iostream>
#include <iomanip>// for setw
//#include <conio.h>     
using namespace std;

int main()
   {
   long pop1=2425785, pop2=47, pop3=9761;

   cout << setw(18)<<left<<"LOCATION"<<setw(12)
        << "POPULATION" << endl
        << setw(18) << "Portcity" << setw(12)<< pop1 << endl
        << setw(18) << "Hightown" << setw(12) << pop2 << endl
        << setw(18) << "Lowville" << setw(12) << pop3 << endl;
        //char ch=getch(); 
       system("pause");
   return 0;
   }
