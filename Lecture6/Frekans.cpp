#include <iostream> 
#include <iomanip> 
#include <cstdlib> //srand

using namespace std;

int main()
{
   const int ESAY = 20; 
   int dizi[ESAY];
   int sayi,tekrar=0;
   
   srand( time( 0 ) ); 
   do
   {
       //srand( time( 0 ) ); 
       for ( int i = 0; i < ESAY ; i++ ) 
       {   
           dizi[i] = rand()%11;
           cout<<dizi[i]<<" ";
       }           
       
       do
       {    
           cout<< "\nsayi giriniz(0-10 arasi)";
           cin>>sayi;
       }while(!(sayi>0&&sayi<=10));
       
	   tekrar=0;
       for ( int j = 0; j < ESAY ; j++ )   
       {   
           	if(sayi==dizi[j])
                tekrar++;
       }
      
      cout<<"\nFrekans:"<<tekrar<<endl;
      
      
   }while(sayi>0);

  return 0; 
}
