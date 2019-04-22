#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{long int dec=0, bin=0, rem, i=0;
 clrscr();
 printf("\nEnter a binary number: ");
 scanf("%ld", &bin);
 while(bin!=0)
 {rem=bin%10;
  dec=dec+rem*pow(8,i);
  bin=bin/10;
  ++i;}
  printf("The decimal equivalent of the number is: %ld", dec);
  getch();}