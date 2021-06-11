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
    int a;
    cout<<"Enter the range=";
    cin>>a;
    if (a>=0 &&a<=5)
    cout<<"Infant";
    else if (a>=6 && a<=12)
    cout<<"Child";
    else if (a>=13 && a<=17)
    cout<<"Teenager";
    else if (a>=18 &&a<=35)
    cout<<"Young age";
     else 
    cout<<"Middle/old age";
    getch();
    return 0;
}
