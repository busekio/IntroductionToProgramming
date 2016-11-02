#include <iostream>
#include <cstring>  //strlen()
using namespace std;

int main()
{  
    char str1[] = "Aynasi istir kisinin lafa bakilmaz!";

    const int MAX = 80; 
    char str2[MAX];                     
    
    cout<<strlen(str1);
    
    cout<<"Once-----"<<str2<<endl;
    
    //  strcpy(str2,str1); ifadesi aşağıdaki döngü yerine kullanılabilir
    
    for(int i=0;i<strlen(str1);i++)
	{
		str2[i]=str1[i];
		
	}
	str2[strlen(str1)]='\0';
	cout<<"-------sonra:"<<str2;
	
            
    return 0;
}
