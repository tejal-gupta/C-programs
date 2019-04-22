#include<stdio.h>
#include<conio.h>

void main()
{ int i=1, n=0, a=0;
  clrscr();
  printf("Enter a number to check whether it is\nprime or composite: ");
  scanf("%d", &n);

  for(i; i<=n; i++)
  {if(n%i==0)
   {a++;}}
   if(a==2)
   {printf("The number entered is prime");}
   else
   {printf("The number entered is composite");}
   getch();}