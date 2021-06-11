//magic no.
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
     int s=0,n,rem=0,s1=0;
     cout<<"Enter the no.->";
     cin>>n;
     while(n!=0)
     {
        rem=n%10;
        s=s+rem;
        n=n/10;
     }
     while(s!=0)
     {
       rem=s%10;
       s1=s1+rem;
       s=s/10;
     }
     if(s1==1)
     cout<<"magic no.";
     else
     cout<<"not magic no.";
     getch();
     return 0;
}
