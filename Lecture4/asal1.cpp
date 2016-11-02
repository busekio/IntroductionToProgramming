#include <conio.h>
#include <iostream>
using namespace std;
bool asal=1;
short sayac=0;               
int main()
{
   
   for(int i=1;i<=100;i++)
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
      {     cout<<i<<"   ";
           sayac++;
           if(sayac%3==0)
           { cout<<endl;       
           }
      }    
   }
   system("pause");
   return 0;
}
