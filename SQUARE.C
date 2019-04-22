#include<stdio.h>
#include<conio.h>

int square(int x);

void main()
{ int num=0, res=0;
 clrscr();
 printf("\n Enter a number: ");
 scanf("%d", &num);
 res=square(num);
 printf("Square of the number is: %d", res);
 getch();}


 int square(int x)
 {int y;
  y=x*x;
  return y;}
