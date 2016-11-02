//Kabarcık Sıralama Programı


#include <iostream> 
#include <iomanip> 
#include <cstdlib> //rand

//#define ESAY 10

using namespace std;

const int ESAY=20;

int main()
{   	
    int sayilar[ESAY];
    
    cout<<"-------Rasgele Uretilen Sayilar-----"<<endl;  
    
    srand( time( 0 ) ); 

	for ( int i = 0; i < ESAY; i++ )
	{   
        sayilar[i]=rand()%100;  //0-RAND_MAX arasında tamsayi uretir
        cout<<sayilar[i]<<"  ";//<<endl;
	}
	
	// Sıralama işlemi
	for(int i=1;i<ESAY;i++){
		for(int j=0;j<ESAY-i;j++){
			if(sayilar[j] < sayilar[j+1]){
				int tmp = sayilar[j];
				sayilar[j] = sayilar[j+1];
				sayilar[j+1] = tmp;
			}
		}
	}
	
	    cout<<"-------Sıralanan Sayilar-----"<<endl;  

	
	for ( int i = 0; i < ESAY; i++ )
	{   
        cout<<sayilar[i]<<"  ";//<<endl;
	}
	
	return 0;
}
