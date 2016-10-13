#include <iostream>
#include <iomanip> 
#include <conio.h>               
using namespace std;
int main()
   {
   char yon='a';
   int x=10, y=10;
   cout << "Cikis icin enter"; 
   cout << "\nYon tusuna basiniz (k, g, d, b):\n";
   cout << "konumunuz:\n"; 
   while( yon != '\r' )         //until Enter is typed
      { 
      cout<<"                   \r";
      cout << x << ", " << y<<'\r'; 
      yon = getch(); 
     //   cin>>yon;          //get character
      if( yon=='k')             //go north
         y--;
      else if( yon=='g' )       //go south
         y++;
      else if( yon=='d' )       //go east
         x++;
      else if( yon=='b' )       //go west
         x--;
      else
          cout   <<"yanlis tusa bastiniz\n";
      }  //end while
   system("pause");
   return 0;
   }
