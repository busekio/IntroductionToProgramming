#include <iostream> 
#include <string> 


using namespace std;

struct Ogrenci
{
       string numara;
       string ad;
       string soyad;
       float genelOrtalama;
            
};


int main()
{
   
   Ogrenci ogrenci1;
   
   getline(cin,ogrenci1.numara); 
   //cin>>ogrenci1.ad;
   getline(cin,ogrenci1.ad); 
   getline(cin,ogrenci1.soyad); 
   cin>>ogrenci1.genelOrtalama;
   
   
   cout<<"Öğrenci Bilgileri:\n"<<ogrenci1.numara<<ogrenci1.ad
   <<ogrenci1.soyad<<ogrenci1.genelOrtalama;
           
          
   return 0; 
}
