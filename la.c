#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\n enter the number");
scanf("%d",&a);

if(a>0)
printf("\n the number is positive");
if(a<0)
printf("\n the number is negative");
if(a==0)
printf("\n the number is zero");
getch();
}
