// stringin.cpp
// simple string variable
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
   {
   const int MAX = 10;              //max characters in string
   char str[MAX];                   //string variable str

   cout << "Karakter dizisi gir";
   cin >>str;                      //put string in str
   //cin >> setw(MAX)>>str;                      //put string in str
                                    //display string from str
   cout << "Girilen karakter dizisi" <<str<<endl;
   return 0;
   }

