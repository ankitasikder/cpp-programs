#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
      int i,n,s=0;
      cout<<"Enter the range-->";
      cin>>n;
      for(i=n;i>=1;i=i-2)
      {
              s=s+i;
              cout<<"+"<<i;
      }
      cout<<"="<<s;
      getch();
      return 0;
}
