#include <iostream>
using namespace std;

int main()
{
   int vize,fin;

   cout << "vize ve final giriniz: ";
   cin >> vize >> fin;
   
   float ortalama=(float)(vize*0.4+fin*.6);
   
   cout<<"ortalamanýz:"<<ortalama;
   
   if( ortalama<50||fin<50)
   {
           cout << "Kaldý";
   }
   else
   {       
           cout << " Geçti";
   }
   
   string sonuc;
   
   sonuc=(ortalama<50 ? "Kaldi":"Gecti");
   cout<<sonuc;
   //cout<<(ortalama<50 ? "Kaldý":"Gecti");
   
   system("pause");
   return 0;
}
