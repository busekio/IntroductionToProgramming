#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////
struct Olcu                
{
   int metre;
   int cmetre;
};
////////////////////////////////////////////////////////////////

struct Sinif                      //rectangular area
{  string adi;
   Olcu uzunluk;              //length of rectangle
   Olcu genislik; 
   Olcu yukseklik;
   int kapasite;              //width of rectangle
};
////////////////////////////////////////////////////////////////

int main()
{
   
   Sinif sinif1,sinif2,sinif3;                  //define a room
   Sinif sinif4={{2,40},{3,90},{5,80},65};
   
   sinif3.uzunluk.metre=5;
   sinif3.uzunluk.cmetre=60;
   sinif3.yukseklik.metre=3;
   sinif3.yukseklik.cmetre=3;
   sinif3.genislik.metre=3;
   sinif3.yukseklik.metre=3;
   sinif3.kapasite=86;
   
   //oturma.uzunluk.cmetre = 65;
   //oturma.genislik.metre = 3;
   //oturma.genislik.cmetre =19;
   
   cout<< sinif4.uzunluk.metre<<endl;
   system("pause");
   return 0;
}

