#include<iostream>
#include<conio.h>
using namespace std;
class square 
{
      public:
      int ar,pr;
      public:
      void area_peri(int a)
      {
           
     
     ar=a*a;
     pr=4*a;
     cout<<"the area is="<<ar<<endl;
     cout<<"the perimeter is="<<pr;
}
};
int main()
{  
int side;
 cout<<"Enter side=";
     cin>>side;
     square ob;
     ob.area_peri(side);

     getch();
     return 0;
}
