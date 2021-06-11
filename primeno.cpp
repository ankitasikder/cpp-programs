//prime or not
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int i,n,f=0;
     cout<<"Enter the no-->";
     cin>>n;
     for(i=2;i<n;i++)
     {
         if(n%i==0)
         {
                   f=1;
                   break;
         }
     }
     if(f==0)
     cout<<"Prime";
     else
     cout<<"Not prime";
getch();
return 0;
}
