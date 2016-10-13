
#include <iostream> 
#include <conio.h>
#include <stdio.h>


using namespace std;                             //for getche()
int main()
{
   
   char yon='a';
   int x=10, y=10;
   
   //cout << "Konumunuz:" << x << ", " << y;
   
    cout << "Yon giriniz(k,g,d,b):\n" ;
   do
   {    //system("cls");
        //cout << "\r"<<"                             \r"<<"Konumunuz:" <<x << ", " << y;
              
       // if(kbhit())
        //{   
            cout <<"Konumunuz:" <<x << ", " << y; 
            yon=getch();
            if(yon==0||yon==224) yon=getch();
            //yon=getch();
            //cout<<int(yon);
            switch(yon)                               //switch on it
            {
                 case 72:  y--; break;                 //go north
                 case 80:  y++; break;                 //go south
                 case 77:  x++; break;                 //go east
                 case 75:  x--; break;                 //go west
                 //case char(27): cout << "Cikis....\n"; break; //Esc (Asci 27) Tusuna basilinca 
                 case '\r': cout << "Cikis....\n"; break; //Enter Tusuna basilinca 
            
                 default:   cout << "tekrar giriniz...\n";      //unknown char
            }  //end switch
        //}  
        
   }while(yon!='\r');//'while(yon!=char (27)); Esc Tusuna basilmissa cik
   system("pause"); 
   return 0;
  
}  //end main
