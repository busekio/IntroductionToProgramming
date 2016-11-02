#include <conio.h>
#include <iostream>
using namespace std;
               
int main()
   {
   char ch;
				       //for each screen position
   for(int i=1; i<80*25; i++)
   {
      ch = 'A';                //assume it’s prime
      for(int j=2; j<i; j++) //divide by every integer from
      {       if(i%j == 0)           //2 on up; if remainder is 0,
              {
                ch = 'D';                //it’s not prime
                break;                    //break out of inner loop
	         }
      }
      cout << ch;                //display the character
   }
   getch();                      //freeze screen until keypress
   //system("cls");
   return 0;
   }
