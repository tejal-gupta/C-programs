#include<stdio.h>
#include<conio.h>

void main()
{ int sal=0, bonus=0,bonus1=0, newsal=0;
  char gen;
  clrscr();
  printf("\n Enter salary of the employee: ");
  scanf("%d", &sal);
  printf("\n Enter gender of the employee M/F: ");
  scanf("%s",&gen);

  newsal=sal;

  if(gen=='M'|| gen=='m')
  {bonus=(sal*5)/100;}

  else if(gen=='F'|| gen=='f')
  {bonus=(sal*10)/100;}

  else
  {printf("Not valid");}

  if(sal<10000)
  {bonus=bonus+((2*sal)/100);}

  newsal=newsal+bonus;
  printf(" Bonus on salary is: %d", bonus);
  printf("\n New salary is: %d", newsal);

  getch();
  }


