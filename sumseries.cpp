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
     int i,n,s=0;
     cout<<"Enter the range-->";
     cin>>n;
     for(i=1;i<=n;i++)
     {
         s=s+i;
         cout<<"+"<<i;
     }
     cout<<"="<<s;
     getch();
     return 0;
}
