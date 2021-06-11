//amstrong no
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<iostream>
#include<conio.h>
using namespace std;
class ams
{
      public:
     int n,rem,s,d;
     public:
      void amstrong()
     {
           rem=0;
           s=0;
     cout<<"Enter the no-->";
     cin>>n;
     d=n;
     for(;n!=0;n=(n/10))
     {
        rem=n%10;
        s=(s+rem*rem*rem);
     }
     if(s==d)
     cout<<"Amstrong no.";
     else
     cout<<"not Amstrong no";
}
};
int main()
{
     ams obj;
     obj. amstrong();
     getch();
     return 0;
}
     


