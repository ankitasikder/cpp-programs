//marks and grades
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     float m,p,cs,c,tot,avg;
     cout<<"Enter the marks of Math-->";
     cin>>m;
     cout<<"Enter the marks of Phy-->";
     cin>>p;
     cout<<"Enter the marks of Chem-->";
     cin>>c;
     cout<<"Enter the marks of Cs-->";
     cin>>cs;
     tot=m+p+c+cs;
     avg=tot/4;
     cout<<"Total="<<tot<<endl;
     cout<<"average="<<avg<<endl;
     if(avg>=80)
     cout<<"Grade A+"; 
     else if(avg>60 && avg<=79.5)
     cout<<"Grade A"; 
     else if(avg>50 && avg<=59.5)
     cout<<"Grade B"; 
     else if(avg>40 && avg<=49.5)
     cout<<"Grade C"; 
     else 
     cout<<"Fail";
     getch();
     return 0;
}
