#include <iostream> 
#include <iomanip> 
#include <ctime> //time() 
#include <cstdlib> // srand() ve rand()
#include <cmath>
using namespace std;

/*void grafikCiz(int adet) 
{ 
     for(int k=0; k < adet;k++)
               cout<<'*';
     cout << "\n"; 
} */
int main()
{
   const int OGR_SAYISI = 500; 
   const int NOTLAR = 3;
   int donguSayisi=0;
  
   int notlar[OGR_SAYISI][NOTLAR]; // array s has 10 elements
   int kaldi=0,gecti=0,genelToplam=0;
   srand( time( 0 ) ); 
   
   for ( int i = 0; i < OGR_SAYISI ; i++ ) // set the values
   {   
       cout<<i+1<<". ogrenci : ";
       
       for(int j=0;j<NOTLAR-1;j++)
       {
         notlar[i][j] = rand()%51+40;
         
         cout<<setw(3)<<notlar[i][j];
        // donguSayisi++;
       }
       notlar[i][2]=round(notlar[i][0]*.4+notlar[i][1]*.6);
       genelToplam+=notlar[i][2];
       cout<<setw(5)<<notlar[i][2];
       if(notlar[i][2]<50)
         {cout<<"   Kaldi";kaldi++;}
       else
         {cout<<"   Gecti";gecti++;}
      
       //grafikCiz(notlar[i][2]/2);
       for(int k=0; k < notlar[i][2]/2;k++)
               cout<<'*';
      
      cout<<endl;
   } 
   //cout<<"donguSayisi:"<<donguSayisi; 
   
   cout<<"kalan: "<<kaldi<<"  gecen: "<<gecti << "ortalama: "<< genelToplam/50.0f; 

  return 0; 
}
