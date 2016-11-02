// setw ile görünmez tablo


#include <iostream>
#include <iomanip>// for setw


using namespace std;

int main()
{
	long pop1=2425785, pop2=47, pop3=9761;

	cout << setw(18)<<right<<"LOCATION"<<setw(12)
        << "POPULATION" << endl
        << setw(18) << "Portcity" << setw(12)<< pop1 << endl
        << setw(18) << "Hightown" << setw(12) << pop2 << endl
        << setw(18) << "Lowville" << setw(12) << pop3 << endl;
       
    cin.get();cin.get(); // Akışı duraklatma
    
	return 0;
 }
