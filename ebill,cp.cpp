#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int cno,un;
     float rs;
     cout<<"Enter the customer no.-->";
     cin>>cno;
     cout<<"Enter the unit-->";
     cin>>un;
     if(un>=0 && un<=200)
     rs=un*0.50;
     else if(un>200 && un<=400)
     rs=((un-200)*0.65)+100;
     else if(un>400 && un<=600)
     rs=((un-400)*0.85)+230;
     else
     rs=((un-600)*1.00)+390;
     cout<<"\nYour customer no.-->"<<cno;
     cout<<"\nYour customer unit="<<un;
     cout<<"\nYour bill amount="<<rs;
     getch();
     return 0;
}
