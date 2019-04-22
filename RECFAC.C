#include<stdio.h>
#include<conio.h>

void main()
{int a, fact;
 clrscr();
 printf("Enter any number to calculate its factorial: ");
 scanf("%d", &a);

 fact= recfactorial(a);
 printf("Factorial of the number= %d", fact);
 getch();
 }

 int recfactorial(int x)
 {int f;
  if(x==1)
  {return(1);}
  else
  {f=x*recfactorial(x-1);}
  return(f);}