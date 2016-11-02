
#include <iostream> 

using namespace std;                             //for getche()
int main()
{
   
   char yon='a';
   int x=10, y=10;
   
   
    cout << "Yon giriniz(k,g,d,b):\n" ;
   do
   {    //system("cls");
        //cout << "\r"<<"                             \r"<<"Konumunuz:" <<x << ", " << y;
        cout <<"Konumunuz:" <<x << ", " << y;       
		cin>>yon;   
		switch(yon)                               //switch on it
        {
         case 'k':  y--; break;                 //go north
         case 'g':  y++; break;                 //go south
         case 'd':  x++; break;                 //go east
         case 'b':  x--; break;                 //go west
         //case char(27): cout << "Cikis....\n"; break; //Esc (Asci 27) Tusuna basilinca 
         case '\r': cout << "Cikis....\n"; break; //Enter Tusuna basilinca 
    
         default:   cout << "tekrar giriniz...\n";      //unknown char
        }  //end switch
          
        
   }while(yon!='\r');//'while(yon!=char (27)); Esc Tusuna basilmissa cik
   return 0;
  
}  //end main
