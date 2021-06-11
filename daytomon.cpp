#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int d,m;
     cout<<"Enter the day=";
     cin>>d;
     m=d/30;
     d=d%30;
     cout<<"month="<<m<<endl;
     cout<<"Day="<<d;
     getch();
     return 0;
}