//prime or not
#include<Stdio.h>
#include<conio.h>
int main()
{
     int i,n,f=0;
     printf("Enter the no-->");
     scanf("%d",&n);
     for(i=2;i<n;i++)
     {
         if(n%i==0)
         {
                   f=1;
                   break;
         }
     }
     if(f==0)
     printf("Prime");
     else
     printf("Not prime");
getch();
}
