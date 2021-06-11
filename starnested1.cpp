//* decoration 4 
#include<iostream>
#include<conio.h>
using namespace std; 
int main()
{
     int i,j,n;
     cout<<"Enter the line no.-->";
     cin>>n;
     for(i=1;i<=n;i++)
     {
         for(j=n;j>=i;j--)
         {
            cout<<"* ";
         }
         cout<<"\n";
     }
     getch();
     return 0;
}
