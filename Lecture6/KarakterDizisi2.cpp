
#include <iostream>
using namespace std;

int main()
{
   const int MAX = 80;              
   char str[MAX],str2[MAX];                   

   cout <<"Karakter dizisi gir";
   //cin >> str;                      
   cin.get(str, MAX); // boþluklarý da alýr
                                 
   cout << "Girilen karakter dizisi" << str << endl;
   
   cout << "Karakter dizisi (cok satir) gir";
   cin.get(str, MAX,'.');  // Çoklu  satýr                                
   cout << "Girilen karakter dizisi" << str << endl;

   return 0;
}

