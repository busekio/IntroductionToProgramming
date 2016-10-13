//4. ornek....

#include <iostream>
#include <conio.h>



using namespace std;

int main()
{   
   int sayi=0; //kla
   int ciftToplam;
   int tekToplam,sayacCift,sayacTek;
          
          
   cout<<"Sayi giriniz... :";
   cin>>sayi;
     
          
   while(sayi>=0)   
   {       
                  //if(sayi>=0)
       //{    
           if(sayi%2==0)
           {
               ciftToplam+=sayi;
               sayacCift++;        
           }else
           {
               tekToplam+=sayi;
               sayacTek++;
           }
           
           
           cout<<"Sayi giriniz... :";
           cin>>sayi;

       //}
   }
   
   cout<<"tek Ortalama: "<<tekToplam/sayacTek<<endl<<"cift ortalama:"
              <<ciftToplam/sayacCift;
      
   system("pause");
   return 0;
}
