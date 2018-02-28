#include<stdio.h>
void main()
{
int n,i,count=0,a=1,p=2;
printf("\n enter the number");
scanf("%d",&n);
while(n!=1)
{
n=n/2;
count++;
}
for(i=0;i<(count+1);i++)
{
a=a*p;
}
printf("\n %d",a);

getch();
}
