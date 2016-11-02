#include <iostream>
#include <string>

using namespace std;
////////////////////////////////////////////////////////////////

int main()
   {
    string ad1("Ahmet");
    string ad2="Mehmet";
    string soyad="Yalcin";
    cin>>ad1;	//Boþluktan sonrasýný almaz
    //cout << ad1;
    //getline(cin,ad2);  //Boþluðu da okur.
    //ad1=ad2;
    ad1.assign(ad2);	//ad1=ad2
   // ad1.append(" Mert");	  //ad1 sonuna Mert ifadesini ekler
    cout<<"---"<<ad1.compare(ad2)<<"   "<<sizeof(bool)<< "---"; //ad1 ile ad2 yi karþýlaþtýrýr. Ayný ise 0 deðerini döndürür.
    //strcpy(ad1,ad2);
    cout << ad1 <<ad2<<endl;
    cout<<ad1.substr(5,4); //ad
    cout<<endl<<ad1.find("me"); //Me ifadesinin ad1 icerisindeki konumu

    system("pause");
   return 0;
   }
