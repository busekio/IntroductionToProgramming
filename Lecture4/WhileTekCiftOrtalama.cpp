//4. ornek....

#include <iostream>

using namespace std;

int main()
{   
  int sayi,tekToplam=0,ciftToplam=0,sayacCift=0,sayacTek=0;
          
          
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
      
   return 0;
}
