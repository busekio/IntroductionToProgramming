#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
  float i;
   
   for(i=1;i<=100; i++)
   {
         cout<<setw(10)<<left<<i<<setw(15)<< pow(i,3.0f)<<endl;       
   }
      
  system("pause");
  
  return 0;
}
