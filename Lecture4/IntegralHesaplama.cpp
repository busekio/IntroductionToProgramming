#include <conio.h>
#include <iostream>
#include <cmath>

using namespace std;
             
int main()
{
   int N;// dikdörtgen sayýsý
   float a,b,h,araToplam=0,genelToplam=0;
   
   cin>>a>>b>>N;
   
   h=(b-a)/N;			       
             
   for(int j=0; j<N; j++) 
   {
      araToplam=h*(pow((a+j*h),2)+5); 
      genelToplam+=araToplam;    
	         
   }
   
   cout<<"Bulunan deðer:"<<genelToplam;
   
   system("pause");
   return 0;
}
