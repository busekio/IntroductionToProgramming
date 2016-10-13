//4. ornek....

#include <iostream>
#include <conio.h>



using namespace std;

int main()
{   
    int sayi,tekToplam=0,ciftToplam=0,sayacCift=0,sayacTek=0;
    
   
     
     cout<<"sayi giriniz";
     cin>>sayi;
          
     
     while(sayi>=0)
     {     
             
             if(sayi%2==0)
              {
                  ciftToplam+=sayi;
                  sayacCift++;
              }else
              {
                   tekToplam+=sayi;
                   sayacTek++;     
              }
              
              cout<<"sayi giriniz";
              cin>>sayi;
          
     }
   
     cout<<"tek ortalama:"<<tekToplam/sayacTek<<endl<<"cift ortalama:"
                <<ciftToplam/sayacCift;  
   
   system("pause");
   return 0;
}
