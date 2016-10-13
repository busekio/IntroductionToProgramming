#include <conio.h>
#include <iostream>
using namespace std;

bool asalmi(int n)
{
     bool asal=1; 
     for(int j=2; j<n; j++) 
     {       if(n%j == 0)           
              {
                asal=0;
                return 0;
                //break;                   
	          }        
     }
     if(asal)
       return 1;
}
               
int main()
{
   //bool asal=1;
   int sayi;
   cin>>sayi;			       


                     
     /* for(int j=2; j<sayi; j++) 
      {       if(sayi%j == 0)           
              {
                asal=0;
                cout<<"asal degil...";
                break;                   
	          }
	          
      }
      
      if(asal)
         cout<<"asaldir...";
   */
   
   cout<<asalmi(sayi);
   system("pause");
   return 0;
}
