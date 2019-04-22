#include<stdio.h>
#include<conio.h>

void main()
{ long fac, num=0, i;
  clrscr();
  printf("\nEnter a number to calculate its factorial: ");
  scanf("%ld", &num);
  fac=num;
  for(i=1; i<num; i++)
  {fac=fac*i;}
  printf("Factorial of the number is: %ld", fac);
  getch();}