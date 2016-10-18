//============================================================================
// Name        : 2.cpp
// Author      : Celal Çeken
// Version     : v.1.1
// Copyright   : Your copyright notice
// Description : Değişken Tipleri, Hata Türleri; yazım, mantıksal ve çalışma zamanı
//============================================================================

#include <iostream>
 
using namespace std;

int main()
{
   short sayi1=0,sayi2=0;
   int toplam=0;
  
   cout <<" iki sayiyi giriniz: ";
   cin >> sayi1 >> sayi2;
   toplam = sayi1+sayi2;
   float sonuc = sayi1/sayi2; // sayi2 0 olduğunda çalışma zamanı hatası
   //char satirbasi='\n';
   cout << "toplam isleminin sonucu:\n"<< toplam<<endl;
   cout << "bolum islemin sonucu:\n"<< sonuc<<endl;
   
   cout <<sizeof(long);
   
   cin.get();cin.get(); // Akışı duraklatma
   return 0;
}
