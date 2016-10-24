
#include <iostream>

using namespace std;

union IPAdres
{
    int onaltilik;
    char onluk[4];
};


int main() 
{ 
		IPAdres ip1;
		
		ip1.onluk[0]=192;
		ip1.onluk[1]=168;
		ip1.onluk[2]=1;
		ip1.onluk[3]=1;
		cout <<  hex<<ip1.onaltilik;
		
		return 0; 
} 
