#include <conio.h>
#include <iostream>
using namespace std;

int enYakinAsal(int n)
{  bool asal;
    for(int i=n-1;i<n;i--)
   {   asal=1;
       for(int j=2; j<i; j++) 
      {       if(i%j == 0)           
              {
                asal=0;
                //cout<<"asal degil...";
                break;                   
	         }
	         
      }
      
       
      if(asal)
      {   
          return i;
      }    
  }
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
   
   cout<<enYakinAsal(sayi);
   system("pause");
   return 0;
}
