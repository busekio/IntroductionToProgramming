#include <iostream> 
#include <iomanip> 
using namespace std;

const int ESAY=10;

int main()
{
    int sayi[ESAY];
        
    for(int i=0; i<ESAY ; i++)
    {
            sayi[i]=i+1;
    }   
    for(int i=0; i<ESAY ; i++)
    {
            cout<<left<<setw(6)<<sayi[i];
            if((i+1)%5==0)
                cout<<endl;
    }	   
    return 0; 
} // end main

