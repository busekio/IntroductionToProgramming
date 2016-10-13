//4. ornek....

#include <iostream>
#include <conio.h>



using namespace std;

int main()
{   
    int sayi,tekToplam,ciftToplam,sayacCift,sayacTek;
    
   
   
     do{     
          cout<<"sayi giriniz";
          cin>>sayi;
          if(sayi>=0)
          {   if(sayi%2==0)
              {
                  ciftToplam+=sayi;
                  sayacCift++;
              }else
              {
                   tekToplam+=sayi;
                   sayacTek++;     
              }
          }
     }while(sayi>=0);
   
     cout<<"tek ortalama:"<<tekToplam/sayacTek<<endl<<"cift toplam:"
                <<ciftToplam/sayacCift;  
   
   system("pause");
   return 0;
}
