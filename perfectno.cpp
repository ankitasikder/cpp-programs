//WAp to check perfect no.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int i,n,s=0;
     cout<<"Enter the no.-->";
     cin>>n;
     for (i=1;i<n;i++)
     {
         if (n%i==0)
         s=s+i;
     }
     if(s==n)
     cout<<"perfect no.";
     else 
     cout<<"not  perfect no.";
     getch();
     return 0;
}
