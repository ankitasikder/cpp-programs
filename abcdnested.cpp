#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char X='A';
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
           cout<<X;
           X++;
        }
        cout<<"\n";
    }
getch();
return 0;
}
