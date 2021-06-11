//create a calculator
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,X;
    cout<<" press 1 for add\n press 2 for substract\n press 3 for multiplication\n press 4 for division\n press 5 for modulus\n";
    cout<<"Enter 2 no.-->";
    cin>>a>>b;
    cout<<"Enter the choice-->";
    cin>>X;
    switch(X)
    {
             case 1:
                  c=a+b;
                  cout<<"The addition is -->"<<c;
                  break;
             case 2:
                  c=a-b;
                  cout<<"The substraction is -->"<<c;
                  break;
             case 3:
                  c=a*b;
                  cout<<"The multiplication is -->"<<c;
                  break;
             case 4:
                  c=a/b;
                  cout<<"The division is -->"<<c;
                  break;
             case 5:
                  c=a%b;
                  cout<<"The modulus is -->"<<c;
                  break;
             default:
                     cout<<"NA";
    }
    getch();
    return 0;
}
