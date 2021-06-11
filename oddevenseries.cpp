//WAP to print odd & even series
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int i,n;
     cout<<"Enter the range-->";
     cin>>n;
     cout<<"-------------------------------\n";
     cout<<"ODD\t EVEN\n";
     cout<<"-------------------------------\n";
     for(i=1;i<=n;i++)
         if (i%2==0)
         cout<<"\n"<<i;
         else
         cout<<"\t"<<i;
getch();
return 0;
}
