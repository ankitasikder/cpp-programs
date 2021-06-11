/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Name_input
{
      public:
             
     char x[1],len,i,j,f;
     public:
     void check()
     {
          len=0,f=0;
     cout<<"Enter your name=";
     gets(x);
     len=strlen(x);
     //print original name
     for(i=0,j=len-1;i<=j;i++,j--)
     {
           if(x[i]==x[j])
           f=0;
           else
           f=1;
     }    
     if(f==0)
      cout<<"Palindrome";
     else
      cout<<"NOT Palindrome";
}
};
int main()
{
    Name_input ob;
    ob. check();
    getch();
    return 0;
}
    
