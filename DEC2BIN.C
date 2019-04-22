#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{long int dec=0,i=0,rem=0,bin=0;
 clrscr();
 printf(" Enter a decimal number: ");
 scanf("%ld",&dec);

 while( dec!=0)
 {rem=dec%2;
  bin=bin+rem*pow(10,i);
  dec=dec/2;
  i++;}
  printf("The binary equivalent of this number is: %ld", bin);
 getch();
 }

