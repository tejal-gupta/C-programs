#include<stdio.h>
#include<conio.h>

void main()
{ int num, temp, sum=0;
  clrscr();
  printf("\nEnter a number: ");
  scanf("%d", &num);
  while(num!=0)
  {temp=num%10;
   sum=sum+temp;
   num=num/10;}
   printf("Sum of the digits in the entered number is: %d", sum);
   getch();
  }
