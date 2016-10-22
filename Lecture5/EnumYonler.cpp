
#include <iostream>

using namespace std;

enum yonler {Guney, Kuzey, Dogu, Bati}; 

int main() 
{ 
		enum yonler yon;
		int secim;
		cout<<"Yon Giriniz (Guney=0, Kuzey=1, Dogu=2, Bati=3) :";
		cin>>secim;
		yon=static_cast<yonler>(secim);
		switch(yon)
		{
			case Guney: cout<<"Guney";break;
			case Kuzey: cout<<"Kuzey";break;
			case Dogu: cout<<"Dogu";break;
			case Bati: cout<<"Bati";break;
			default: cout<<"hatali secim";
		}
		return 0; 
} 

