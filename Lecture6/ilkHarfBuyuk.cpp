//Klavyeden girilen karakter dizisini tersten yazdýran program

#include <iostream>
#include <string>

using namespace std;
////////////////////////////////////////////////////////////////

int main()
{
    string ad1;
    //cin.get(ad1,80);	//Boþluktan sonrasýný da okur
    //for(int i=1;i<=ad1.length();i++)
    //        cout<<ad1[ad1.length()-i];
    
    getline(cin,ad1);  //Boþluðu da okur...
    //cout<<ad1.length();
    //system("pause");
    cout<<(char)toupper(ad1[0]);
    
    for(int i=1;i<ad1.length();i++)
    {     
          if(isspace(ad1[i]))   
          {
            cout<<(char)(ad1[i]);
            cout<<(char)toupper(ad1[i+1]);i++;
          }  
          else
            cout<<(char)tolower(ad1[i]);
    }
        system("pause");
    return 0;
}
