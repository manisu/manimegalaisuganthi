#include<stdio.h>
void main()
{
int i;
float k,num;
printf("\n enter the number");
scanf("%f",&num);
i=num;
k=num-i;
if(k>0.5)
{
i=i+1;
}
printf("\n %d",i);
getch();
}
