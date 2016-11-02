#include <iostream> 
#include <iomanip> 
#include <cstdlib> //rand

//#define ESAY 10

using namespace std;

const int ESAY=20;

int main()
{   	
    //cout<<RAND_MAX<<endl;  
    
    int sayilar[ESAY];
	
	cout<<setw(5)<<"indis"<<setw(5)<<"Deger"<<endl;
	
	srand(time(0));
	
	for ( int i = 0; i < ESAY; i++ )
	{   
        sayilar[i]=(rand()%100)+1;  //0-RAND_MAX arasında tamsayi uretir
        cout<<sayilar[i]<<" ";//<<endl;
	}
	
	return 0;
}
