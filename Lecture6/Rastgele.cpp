#include <iostream> 
#include <iomanip> 

//#define ESAY 10

using namespace std;

const int ESAY=20;

int main()
{   	
    cout<<RAND_MAX<<endl;  
    
    int sayilar[ESAY];
	
	cout<<setw(5)<<"indis"<<setw(5)<<"Deger"<<endl;

	for ( int i = 0; i < ESAY; i++ )
	{   
        sayilar[i]=rand()%100;
        cout<<sayilar[i]<<endl;
	}
	
    system("pause");
	return 0;
}
