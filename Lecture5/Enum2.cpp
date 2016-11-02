

#include <iostream>

using namespace std;

enum CalisanDurumu {acliksiniri, ortahalli, iyidurumda} ;

struct Isci
{
    int isciNo;
    float maas;
    CalisanDurumu cd; 
};

int main ()
{
           
      Isci  a,b,c;
     
      cout<<" ###  GIRILEN BILGILER  ###"<<endl;
      cout<<"1. calisanin numarasini giriniz:  ";
      cin>>a.isciNo;
      cout<<endl;
      cout<<"1. calisanin maasini giriniz:  ";
      cin>>a.maas;
      cout<<endl; 
      
      cout<<" ***  CIKTI BILGISI  ***"<<endl;
      cout<<" 1.Calisanin numarasini = \t "<<a.isciNo<<endl;
      cout<<" 1.Calisanin maasi      = \t "<<a.maas<<" TL"<<endl;
      
      if (a.maas<600)
      {
         a.cd=acliksiniri;
      }
      else if (a.maas<1500)
      {
         a.cd=ortahalli;
      }
      else if (a.maas>1500)
      {
         a.cd=iyidurumda;
      }
     
      switch (a.cd)
      {
              case acliksiniri:
                 cout<<" 1.Calisanin durumu     = \t acliksiniri \n "<<endl;
                 break;      
              case ortahalli:
                 cout<<" 1.Calisanin durumu     = \t ortahalli\n "<<endl;
                 break; 
              case iyidurumda:
                 cout<<" 1.Calisanin durumu     = \t iyidurumda \n"<<endl;
                 break;
      }
    
      system("pause");
      return 0;
}
