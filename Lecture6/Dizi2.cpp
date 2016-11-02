#include <iostream> 
#include <iomanip> 
//#define ESAY 10

using namespace std;

const int ESAY=10;

int main()
{   
	int sayilar[ ESAY ] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
	
	cout<<setw(5)<<"indis"<<setw(8)<<"Deger"<<setw(20)<<"Grafik"<<endl;

	for ( int i = 0; i < ESAY; i++ )
	{
			cout<<setw(5)<<i+1<<setw(8)<<sayilar[i]<<setw(15);
			for(int j=0;j<sayilar[i];j++)
				cout<<'*';
			cout<<endl;

			
	}
	return 0;
}
