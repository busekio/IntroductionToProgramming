#include <iostream>
#include <string>

using namespace std;
////////////////////////////////////////////////////////////////

int main()
{
   const int DAYS = 7;    
   const int MAX = 10;     
                       
   char star[DAYS][MAX] = { "Pts", "Sali","Cars",
   "Pers","Cuma","Cumartesi","Pazar"};
   
   //string star[2]={"Pazartesi","Sali"};
   for(int j=0; j<DAYS; j++)      
      cout << star[j] << endl;

   system("pause");

   return 0;
}
