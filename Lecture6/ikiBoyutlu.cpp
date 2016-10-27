#include <iostream> 
#include <iomanip> 
#include <ctime> //time() 

using namespace std;

const int SATIR = 6; 
const int SUTUN = 5;

int main()
{
   int matris[SATIR][SUTUN]; 
  
   srand( time( 0 ) ); 
   
   for ( int i = 0; i < SATIR ; i++ ) 
   {   for(int j=0;j<SUTUN;j++)
      {
         matris[i][j] = rand()%10+1;   
      }
   }   
   
   for ( int i = 0; i < SATIR ; i++ ) 
   {   for(int j=0;j<SUTUN;j++)
      {
         cout<<setw(5)<<matris[i][j];
      }
      cout<<endl;
      
   }       
   cout<<endl<<matris[0][0]+matris[5][4];
   system("pause");
   return 0; 
}
