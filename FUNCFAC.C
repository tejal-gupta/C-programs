#include<stdio.h>
#include<conio.h>

void main()
{int a, fact;
 clrscr();
 printf("Enter any number to calculate its factorial: ");
 scanf("%d", &a);

 fact= factorial(a);
 printf("Factorial of the number= %d", fact);
 getch();
 }

 int factorial(int x)
 {int f=1, i;
  for(i=x; i>=1;i--)
  {f=f*i;}
  return(f);}