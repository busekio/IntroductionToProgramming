 // char tipi anlatılıyor

#include <iostream>        // cout, cin ...

using namespace std;

int main()
{
   char ch3,ch1 = 'A';    
   char ch2 = '\t';   
   
   ch3 = 'B';         
   cout << ch1<< ch2<<'\t'<<"\t"<<ch3<< endl ; 
   cin.get();cin.get(); // Akışı duraklatma       
  
   return 0;
}
