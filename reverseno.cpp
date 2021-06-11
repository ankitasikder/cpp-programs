//Reverse of a no.
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
     int n,rem=0;
     cout<<"Enter the no.-->";
     cin>>n;
     for(;n!=0;n=n/10)
     {
              rem=n%10;
              cout<<rem;
     }
getch();
return 0;
}
