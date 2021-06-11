/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int X;
     cout<<" Press 1 for Monday\n press 2 for Tuesday\n press 3 for Wednesday\n press 4 for Thursday\n press 5 for Friday\n press 6 for Saturday\n press 7 for Sunday\n";
     cout<<"Enter your choice -->";
     cin>>X;
     switch(X)
     {
              case 1:
                  cout<<"Monday";
                   break;
              case 2:
                   cout<<"Tuesday";
                   break;
              case 3:
                   cout<<"Wednesday";
                   break;
              case 4:
                   cout<<"Thursday";
                   break;
              case 5:
                   cout<<"Friday";
                   break;
              case 6:
                   cout<<"Saturday";
                   break;
              case 7:
                   cout<<"Sunday";
                   break;
              default:
                   cout<<"NA";
     }
getch();
return 0;
}
