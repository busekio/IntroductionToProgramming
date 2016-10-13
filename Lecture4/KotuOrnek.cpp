//============================================================================
// Name        : KotuOrnek.cpp
// Author      : 
// Version     : v.1.1
// Copyright   : Your copyright notice
// Description : Karekök Bulma // goto deyimi kullanılarak kodlanması (Kötü bir kodlama örneği)
//============================================================================

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   float a,x,e,b,y;
   cout<<"karekökü bulunacak sayiyi giriniz: ";
   cin>>a;
   cout<<"tahmini karakör değerini giriniz: ";
   cin>>x;
   cout<<"kabul edilebilir hata değerini giriniz: ";
   cin>>e;
   A4:
   b=(a-x*x)/(2*x);  // hatayi hesapla
   y=x+b;    // yeni karakök değeri
   cout<<endl<<y;
   if (fabs(b)<=e) 
   		goto A9;
	else
		x=y;goto A4;
	A9:
		cout<<"karekök: "<<y;  // en son hesaplanan
                                           // karekök değeri
    cin.get();cin.get(); // Akışı duraklatma
   return 0;
}

