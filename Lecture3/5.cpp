// circarea.cpp
// demonstrates floating point variables
#include <iostream>                     //for cout, etc.
using namespace std;

int main()
   {
   float yaricap,alan;                           //variable of type float
   const float PI = 3.14159;           //type const float

   cout << "Dairenin yari capi: ";  //prompt
   cin >> yaricap;                          //get radius
   alan = PI * yaricap * yaricap;         //find area
   cout << "alan degeri: " << alan << endl;
   system("pause");  //display answer
   return 0;
   }
