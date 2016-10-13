#include <iostream> 
#include <conio.h>
using namespace std;                             //for getche()
int main()
   {
   
   enum YON {kuzey,guney,dogu,bati};
   YON yon;
   //char yon='a';
   int x=10, y=10;
   
   //cout << "Konumunuz:" << x << ", " << y;
   
    cout << "Yon giriniz(k,g,d,b):\n" ;
   do
   {    //system("cls");
        cout << "\r"<<" \r"<<"Konumunuz:" <<x << ", " << y;
       
        cin>>yon;
        //yon=getch();
        switch(yon)                               //switch on it
         {
         case kuzey:  y--; break;                 //go north
         case guney:  y++; break;                 //go south
         case dogu:  x++; break;                 //go east
         case bati:  x--; break;                 //go west
         case '\r': cout << "Cikis....\n"; break; //Enter key
         default:   cout << "tekrar giriniz...\n";      //unknown char
         }  //end switch
          
        
   }while(yon!='\r');
   
  /* 
   
   
    system("pause"); 
   return 0;
  
   }  //end main
