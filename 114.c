#include<stdio.h>
void main()
{
int N,K,a[10],i,b;
printf("\n enter the numbers");
scanf("%d\t%d",&N,&K);
printf("\n enter the elements");
for(i=0;i<N;i++)
{
scanf("%d\t",&a[i]);
}
while(K!=0)
{
for(i=0;i<N;i++)
{
if(a[i]%2!=0)
   {   b=a[i];  }
}
K=K-1;
}
printf("\n the num is %d",b);
getch();
}
