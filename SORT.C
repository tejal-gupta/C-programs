#include<stdio.h>
#include<conio.h>

void main()
{ int c[5], temp=0, i, j;
  clrscr();
 printf("\n enter the numbers in array");
 for(i=0; i<=4; i++)
 {scanf("%d",&c[i]);}
 printf("\n the enterd array is: ");
 for(i=0; i<=4; i++)
{printf("%d",c[i]);
 printf(","); }

// sorting
for(i=0; i<=4; i++)
{ for(j=i+1; j<=4; j++)
  {if (c[i]>c[j])
  {temp=c[i];
  c[i]=c[j];
  c[j]=temp;}}}
printf("\n the sorted array is: ");
for(i=0;i<=4; i++)
{printf("%d", c[i]);
 printf(",");}
getch();}