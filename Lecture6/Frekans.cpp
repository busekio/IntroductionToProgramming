#include <iostream> 
#include <iomanip> 
#include <ctime> //time() 

using namespace std;

int main()
{
   const int ESAY = 25000; 
   int dizi[ESAY];
   int sayi,tekrar=0;
   
   do
   {
       srand( time( 0 ) ); 
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
   
       for ( int j = 0; j < ESAY ; j++ )   
       {   
           	if(sayi==dizi[j])
                tekrar++;
       }
      
      cout<<"\n"<<tekrar<<endl;
   }while(sayi>0);

  system("pause");
  return 0; 
}
