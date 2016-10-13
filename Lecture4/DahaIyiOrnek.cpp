//============================================================================
// Name        : DahaIyiOrnek.cpp
// Author      : 
// Version     : v.1.1
// Copyright   : Your copyright notice
// Description : Karekök Bulma // goto yerine döngü kullanımı (olması gereken budur...)
//============================================================================

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   float a,x,e,b;
   cout<<"karekökü bulunacak sayiyi giriniz: ";
   cin>>a;
   cout<<"tahmini karakör değerini giriniz: ";
   cin>>x;
   cout<<"kabul edilebilir hata değerini giriniz: ";
   cin>>e;
   do
   {
	   b=(a-x*x)/(2*x);  // hatayi hesapla
	   //y=x+b;    // yeni karakök değeri
	   x=x+b; // yeni karakök değeri
	   cout<<endl<<x;
   }while(fabs(b)>e);
		
	cout<<endl<<"karekök: "<<x;  // en son hesaplanan
                                           
    cin.get();cin.get(); // Akışı duraklatma
   return 0;
}

