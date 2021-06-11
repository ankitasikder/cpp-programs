#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int p,r,t,I;
    cout<<"Enter principle,rate of interest,time no.-->";
    cin>>p>>r>>t;
    cout<<"The simple interest is -->"<<(p*r*t)/100;
    getch();
    return 0;
}
