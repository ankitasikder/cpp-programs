#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int i,j,n,k=0;
   cout<<"Enter the line no.";
   cin>>n;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
       {
          k=k+1;             
          cout<<k;
       }
      cout<<"\n";
   }
   getch();
   return 0;
}
