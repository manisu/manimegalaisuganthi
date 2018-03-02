#include<stdio.h>
void main()
{
int n,l,r;
printf("\n enter the number");
scanf("%d",&n);
printf("\n enter the intervals");
scanf("%d\t%d",&l,&r);
if((n>l)&&(n<r))
printf("\n yes");
else
printf("\n no");
getch();
}
