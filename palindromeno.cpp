#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int n,rem=0,rev=0,d;
     cout<<"Enter the no.-->";
     cin>>n;
     d=n;
     for(;n!=0;n=n/10)
     {
          rem=n%10;
          rev=(rev*10)+rem;
     }
     if(rev==d)
     cout<<"The no. is palindrome";
     else
     cout<<"The no. is not palindrome";
     getch();
     return 0;
}
