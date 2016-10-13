

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
   float i=1;
   //for(i=1;i<=100; i++)
   do
   {
         cout<<setw(10)<<left<<i<<setw(15)<< pow(i,3.0f)<<endl;
         i++;       
   }while(i<=100);
      
  system("pause");
}
