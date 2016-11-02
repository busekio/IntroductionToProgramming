#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    int i, j, r;
    cout<<"ortalama degerini giriniz";
    cin>>r;
    cout<<endl<<endl;
    
    for(i =-1*r; i < r; i++)
    {   if((i<0) && (i<r-1))
            cout<<"\t";
        if(i<0)
       {
            for(j = -1*r; j < r; j++)
            {
                if(i*i + j*j-2 < r*r)
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<endl;
        }
        if(i==r-1)
          for(j = 1; j < r*4; j++)
              cout<<"*";
        
          
    }

    cout<<endl<<endl;  
    system("pause");
  
  return 0;
}
