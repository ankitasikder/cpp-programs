//vowel check
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     char X;
     cout<<"Enter the character-->";
     cin>>X;
     switch(X)
     {
              case 'a': case 'A':
              case 'e': case 'E':
              case 'i': case 'I':
              case 'o': case 'O':
              case 'u': case 'U':
                   cout<<"Vowel";
                   break;
                   case' ':case'@':case'#':case'$':case'*':
                         cout<<"special case";
                         break;
                         default:
                                 cout<<"consonent";
     }
     getch();
     return 0;
}
