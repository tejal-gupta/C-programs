#include<stdio.h>
#include<conio.h>

void main()
{ int age=0;
  clrscr();
  printf("\n Enter the age of the person: ");
  scanf("%d", &age);
  if(age<18)
  {printf("The person is not eligible to vote");}
  else
  {printf("The person is eligible to vote");}
  getch();
}