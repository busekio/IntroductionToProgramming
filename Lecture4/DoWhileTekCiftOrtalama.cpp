//4. ornek....

#include <iostream>

using namespace std;

int main()
{   
  int sayi,tekToplam=0,ciftToplam=0,sayacCift=0,sayacTek=0;
    
   
   
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
   
   return 0;
}
