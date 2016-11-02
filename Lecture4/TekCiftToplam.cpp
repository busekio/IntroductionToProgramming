

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

  cout<<"cift sayýlar toplam: "<<ciftToplam<<"Tek sayýlar toplamý:"
             <<tekToplam<<endl;       
  
  cout<<"cift sayýlar ortalamasi: "<<ciftToplam/sayacCift<<"Tek sayýlar ort:"
             <<tekToplam/sayacTek<<endl; 
  
    
  system("pause");
  return 0;
}
