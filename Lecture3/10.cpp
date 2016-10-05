// assign.cpp
// demonstrates arithmetic assignment operators
#include <iostream>
using namespace std;

int main()
   {
   int a = 27;

   a += 10;              // a = a + 10;
   cout << a << ", ";
   a -= 7;               //  a = a - 7;
   cout << a << ", ";
   a *= 2;               //same as: a = a * 2;
   cout << a << ", ";
   a /= 3;               //same as: a = a / 3;
   cout << a << ", ";
   a %= 3;               //same as: a = a % 3;
   cout << a << endl;
    system("pause");  //display answer
   return 0;
   }
