//WAP to print 2+22+222+...+n
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int i,n,s=0;
   cout<<"Enter the range-->";
   cin>>n;
   for (i=2;i<=n;i=(i*10)+2)
   {
       s=s+i;
       cout<<"+"<<s;
   }
   cout<<"="<<s;
   getch();
   return 0;
}

