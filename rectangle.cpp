#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int l,b,ar,pr;
     cout<<"Enter length,breath=";
     cin>>l>>b;
     pr=2*(l+b);
     ar=l*b;
     cout<<"the area is="<<ar<<endl;
     cout<<"the perimeter is="<<pr;
     getch();
     return 0;
}