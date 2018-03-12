#include<stdio.h>
void main()
{
int N,K,a[10],i,count=0;
printf("\n enter the numbers");
scanf("%d\t%d",&N,&K);
printf("\n enter the elements");
for(i=0;i<N;i++)
{
scanf("%d\t",&a[i]);
}
for(i=0;i<N;i++)
{
if(K==a[i])
{
count++;
}
}
printf("\n no.of repititions=%d",count);
getch();
}
