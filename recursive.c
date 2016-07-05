#include<stdio.h>
#include<conio.h>
void main()
{
int n,r=0,j;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
while(n>=1)
{
j=n%10;
r=r*10+j;
n=n/10;
}
printf("After reverse:%d",r);
getch();
}
