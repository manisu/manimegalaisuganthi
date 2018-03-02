#include<stdio.h>
void main()
{
int num,i,flag=0;
printf("Enter a number");
scanf("%d",&num);
for(i=4;i<=num/2;i++)
{
if(num%i==0)
{  
flag=1;
break;
}
}
if(flag==0)
{
printf("\n No");
}
else
{
printf("\n Yes");
}
getch();
}
