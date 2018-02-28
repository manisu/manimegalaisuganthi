#include<stdio.h>
void main()
{
int a,b,d;
printf("\n enter the numbers");
scanf("%d\t%d",&a,&b);
d=a-b;
if(d%2==0)
printf("\n difference of the numbers is an even number");
else
printf("\n difference of the numbers is a odd number");
getch();
}
