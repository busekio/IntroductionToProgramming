#include <iostream>
using namespace std;

struct zaman
{
int saat;
int dakika;
int saniye;

};
struct etkinlik 
{
int yil;
int ay;
int gun;
struct zaman z;
};


int main()
{
struct etkinlik etkinlik1;
cout<<"Etkinligin yil ay gün saat dakika ve saniye bilgilerini giriniz:\n";
cin>>etkinlik1.yil>>etkinlik1.ay>>etkinlik1.gun;
cin>>etkinlik1.z.saat>>etkinlik1.z.dakika>>etkinlik1.z.saniye;
cout<<endl<<"Girilen Etkinlik Bilgileri:"<<endl<<etkinlik1.yil
<<etkinlik1.ay<<etkinlik1.gun<<etkinlik1.z.saat<<etkinlik1.z.dakika
<<etkinlik1.z.saniye;
return 0;
}

