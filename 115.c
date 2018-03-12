#include<stdio.h>
void main()
{
int n,k,i,a[10],t;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter number(k)");
	scanf("%d",&k);
	printf("\n enter n numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]>a[i+1])
		{
	t=a[i];
	a[i]=a[i+1];
	a[i+1]=t;
	}
}
for(i=1;i<=n;i++)
{
	if(i==k-1)
	{
		printf("\n%d",a[i]);
	}
}
getch();
}
