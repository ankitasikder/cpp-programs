#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
           cout<<i;
        }
        cout<<"\n";
    }
getch();
return 0;
}