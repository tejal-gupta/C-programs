#include<stdio.h>
#include<conio.h>

void main()
{ int num, temp=0;
  clrscr();
  printf("\nEnter a number: ");
  scanf("%d",&num);
  while(num!=0)
  {temp=num%10;
   printf("%d",temp);
   num=num/10;}
   getch(); }