#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     float pi=3.14,r,ar,di;
     cout<<"Enter radius=";
     cin>>r;
     ar=pi*r*r;
     di=2*pi*r;
     cout<<"the area is="<<ar<<endl;
     cout<<"the diameter is="<<di;
     getch();
     return 0;
}
