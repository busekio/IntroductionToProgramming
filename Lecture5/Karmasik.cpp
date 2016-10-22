#include <iostream>
#include <iomanip>
using namespace std;

struct Karmasik 
{
	double gercel;
    double sanal;
};


int main()
{
    Karmasik sayi1;//,sayi2;
    sayi1.gercel=44.423423423;
    sayi1.sanal=48;
    //sayi1.sanal=48e2;
    cout << fixed <<setprecision(3)<<sayi1.gercel
         <<'+'<<sayi1.sanal<<" i"<<endl;
    //cout <<scientific<<setprecision(3)<<sayi1.gercel<<'+'<<setw(5)<<right<<sayi1.sanal
    //<<'i'<<endl;
    cout <<sizeof(sayi1)<<"    "<<sizeof(int);
   //system("cls");
   return 0;
}
