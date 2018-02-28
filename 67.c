#include<stdio.h>
void main()
{
int n;
printf("\n enter the number");
scanf("%d",&n);
while(n!=0)
{
if(n%10==0)
{printf("%d",n);
break;}
n++;
}
getch();
}
