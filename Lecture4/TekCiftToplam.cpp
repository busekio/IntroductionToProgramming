

#include <iostream>
//#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
  int i,tekToplam=0,ciftToplam=0,sayacTek=0,sayacCift=0;
   
  for(i=1;i<=1000; i++)
  {
         if(i%2==0)
         {
             ciftToplam+=i;
             sayacCift++;
            
         }else
         {
             tekToplam+=i;
             sayacTek++;     
         }
  }

  cout<<"cift say�lar toplam: "<<ciftToplam<<"Tek say�lar toplam�:"
             <<tekToplam<<endl;       
  
  cout<<"cift say�lar ortalamasi: "<<ciftToplam/sayacCift<<"Tek say�lar ort:"
             <<tekToplam/sayacTek<<endl; 
  
    
  system("pause");
  return 0;
}
