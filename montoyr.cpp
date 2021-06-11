#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int y,d;
     cout<<"Enter the day=";
     cin>>d;
     y=d/365;
     d=d%365;
     cout<<"year="<<y<<endl;
     cout<<"day="<<d;
     getch();
     return 0;
}
