//WAP to print factorial
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int i,n,f=1;
     cout<<"Enter the no.-->";
     cin>>n;
     for(i=1;i<=n;i++)
     f=f*i;
     cout<<"The factorial is -->"<<f;
     getch();
     return 0;
}
