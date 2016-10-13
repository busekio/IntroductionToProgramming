#include <iostream>
using namespace std;

int main()
{
   int vize,fin;
   char notHarf;
   cout << "vize ve final giriniz: ";
   cin >> vize >> fin;
   
   float ortalama=vize*.4+fin*.6;
   
   cout<<"ortalamanýz:"<<ortalama;
   
   if( ortalama<50||fin<50)
   {
           cout << "Kaldý";
   }
   else
   {       
           cout << " Geçti";
   }
   cout<<"\n \n \n \n";
   //string sonuc;
   
   //sonuc=(ortalama<50 ? "Kaldý":"Geçti");
   
   //cout<<(ortalama<50 ? "Kaldý":"Geçti");
   
   
   if ( ortalama >= 90 )       // 90 - 100    
        notHarf='A';
   else if (ortalama >= 80 )  // 80-89   
        notHarf='B';
   else if (ortalama >= 70 )  // 70-79   
        notHarf='C';  
   else if (ortalama >= 60 )  // 60-69   
        notHarf='D';
   else if (ortalama >= 50 )     
        notHarf='E';
   else                     // 0 - 60   cout << "F";
        notHarf='F';
   
    
   switch(notHarf)
   {
			case 'A' :
				cout<<("A - mukemmel!");
				break;
			case 'B' :
				
				
			case 'C' :
				cout<<(" iyi");
				break;
			case 'D' :
				cout<<("D - gectiniz");
				break;
			case 'E' :
				cout<<("E - zar zor gectiniz");
				break;
			case 'F' :
				cout<<("F - kaldiniz");
				break;
			default :
				cout<<("gecersiz not girdiniz...");
   }

   //cout<<"ortalamanýzýn harf karþýlýgý:"<<ortalama;
   system("pause");
   return 0;
}
