#include <iostream> 
#include <iomanip> 
//#define ESAY 10

using namespace std;

const int ESAY=20;

int main()
{   
	int sayilar[ ESAY ] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
	
	cout<<setw(5)<<"indis"<<setw(5)<<"Deger"<<endl;

	for ( int i = 0; i < ESAY; i++ )
	{
		cout<<setw(5)<<i<<setw(5)<<sayilar[i]<<endl;
	}
	system("pause");
	return 0;
}
