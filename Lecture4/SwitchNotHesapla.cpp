#include <iostream>
using namespace std;

int main()
{
   int vize,fin;

   cout << "vize ve final giriniz: ";
   cin >> vize >> fin;
   
   float ortalama=vize*.4+fin*.6;
   
   cout<<"ortalaman�z:"<<ortalama;
   
   if( ortalama<50||fin<50)
   {
           cout << "Kald�";
   }
   else
   {       
           cout << " Ge�ti";
   }
   cout<<"\n \n \n \n";
   //string sonuc;
   
   //sonuc=(ortalama<50 ? "Kald�":"Ge�ti");
   
   //cout<<(ortalama<50 ? "Kald�":"Ge�ti");
  char notHarf='A'; 
  switch(notHarf)
		{
			case 'A' :
				cout<<("A - mukemmel!");
				break;
			case 'B' :
				
				
			case 'C' :
				cout<<(" iyi");
				reak;
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
  
  
  
   system("pause");
   return 0;
}
