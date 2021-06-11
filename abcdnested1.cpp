#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  
     char X='A';
     int i,j;
     for (i=4;i>=1;i--)
     {
         for(j=1;j<=i;j++)
         {
             cout<<X;
             X++;
         }
         cout<<"\n";
         X='A';
     }
     getch();
     return 0;
}

