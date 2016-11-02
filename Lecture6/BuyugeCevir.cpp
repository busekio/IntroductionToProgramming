#include <iostream>
#include <cctype>                    

using namespace std;

int main()
{   
    string str1= "" ;

    const int MAX = 80; 
    char str2[MAX];                     
    cin>>str1;
    cout<<str1.length()<<" karakter"<<endl;
    int j;
    
    for(j=0; j<str1.length(); j++)
      str2[j] = toupper(str1[j]); 
    str2[j] = NULL;                             
    
    cout << str2 << endl;               

    return 0;
}
