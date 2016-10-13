#include <iostream>
using namespace std;
#include <conio.h>               //for getche()

int main()
{
      double n1, n2, sonuc;
      char islec, ch;

      do {
             cout << "\nilk sayi, islec, ikinci: ";
             cin >> n1 >> islec >> n2;
             switch(islec)
             {
                 case '+':  sonuc = n1 + n2;  break;
                 case '-':  sonuc = n1 - n2;  break;
                 case '*':  sonuc = n1 * n2;  break;
                 case '/':  sonuc = n1 / n2;  break;
                 default:   sonuc = 0;
             }
             cout << "sonuc = " << sonuc;
             do{
                cout << "\nBaska islem(e/h): ";
                cin >> ch;           
             }while(!(ch=='e'||ch=='h'));
          
         } while( ch != 'h' );
      return 0;
}

