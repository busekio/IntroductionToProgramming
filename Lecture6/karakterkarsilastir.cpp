#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char kopya1[50], kopya2[50], kelime[50];
	int s;
	cout<<"Metin Giriniz: ";
	cin>>kelime;
	strcpy(kopya1, kelime);      // kelime katarýný kopya1'e kopyala
	cout<<kopya1<<endl;
	strncpy(kopya2, kelime, 4);   //kelime nin ilk 4 karakterini kopyala
	cout<<kopya2<<endl;
	if (strcmp(kopya1,kelime) == 0)  // kopya1 ve kelime karsilastir
	   cout <<"kopyalama tamamdýr";
	strcat(kopya1,kelime);            // kelimeyi kopya1'e ekle
	cout<<kopya1<<endl;
	system("pause");
	return 0;
}

