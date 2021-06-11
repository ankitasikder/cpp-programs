//two+three series
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,a=2,s=0,t=0;
    cout<<"Enter the range-->";
    cin>>n;
    for(;a<=n;a=a+3)
    {
       s=s+a;
       cout<<"  +"<<a;
    }
    cout<<" ="<<s;
getch();
return 0;
}
