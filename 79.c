#include<stdio.h>
void main()
{
int a,b,n,i,flag=0;
printf("\n enter the number");
scanf("%d\t%d",&a,&b);
n=a*b;
for(i=1;i<n/2;i++)
{
if(i*i==n)
{flag=1;
}
}
if(flag==1)
printf("\n yes");
else
printf("\n no");
getch();
}
