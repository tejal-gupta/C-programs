#include<stdio.h>
#include<conio.h>

void main()
{ float p, r, t, si=0;
  clrscr();
  printf("Enter Principal amount=");
  scanf("%f",&p);
  printf("Enter Rate of interest=");
  scanf("%f",&r);
  printf("Enter Time period=");
  scanf("%f",&t);
  si=(p*r*t)/100;
  printf("Simple interest= %f", si);
  getch();}