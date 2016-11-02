// Tip dönüsümü

#include <iostream>

using namespace std;

int main()
{
   char ch1='\0';
   
   cin>>ch1;              
     
   cout << ch1 << "\t ASCI karsiligi:"<< static_cast<int>(ch1);
   
   // (int)ch1 C standardi tip dönüstürme ifadesidir

   //cout << ch1 <<"nin ASCII degeri="<<(int)ch1<< endl;   
   
 
   return 0;
}
