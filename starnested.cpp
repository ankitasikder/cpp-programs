//decoration
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int i,j;
   for(i=1;i<=4;i++)
   {
      for(j=i;j>=1;j--)
      {
         cout<<"* ";
      }
     cout<<"\n";
     }
   getch();
   return 0;
}
