#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
  float i;
   
   for(i=1;i<=10; i++)
   {
       if(i==5)
			break;
         
       cout<<setw(10)<<left<<i<<setw(15)<< pow(i,3.0f)<<endl;       
   }
      
  
  return 0;
}
