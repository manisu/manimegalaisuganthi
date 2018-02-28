#include<stdio.h>
#include<string.h>
void main()
{
char a[50],b[50];
int c;
printf("\n enter the string");
scanf("%s",a);
strcpy(b,a);
strrev(b);
c=strcmp(a,b);
if(c==0)
printf("\n yes");
else
printf("\n no");
getch();
}
