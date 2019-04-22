#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{int n, i, sq=0;
 clrscr();
 printf("\nEnter value of n to calculate square of first n even numbers= ");
 scanf("%d", &n);

 for(i=1; i<=n; i++)
 {sq=sq+pow((2*i),2);}

 printf("Result= %d", sq);
 getch();
 }