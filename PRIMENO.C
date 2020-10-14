#include<stdio.h>
#include<conio.h>
void main()
{
int no,c=0,i;
clrscr();
printf("enter no");
scanf("%d",&no);
for(i=2;i<no;i++)
{
if(no%i==0)
{
c=c+1;
}
}
if(c>=1)
{
printf("the nom is not prime");
}
else
{
printf("the no is prime");
}
getch();
}