#include <iostream>
using namespace std;
int 
main()

{
    int b,e,p;
    b=3;
    e=0;
    while (e<=15)
    {
     if (e==0)
     {
      p=1;
     }       
     if (e==1)
     {
      p=b;
     }                  
     cout<<" "<<b<<" elevado a "<<e<<" e igual a: "<<p;
     p*=b; 
     e=e+1; 
     cout<<"\n";
    }
    cout<<"\n";
    system("pause");
    return 0;
}     
