#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{int dec=0, rem=0, oct=0, i=0;
 clrscr();
 printf("Enter the decimal number: ");
 scanf("%d",&dec);

 while(dec!=0)
 {rem=dec%8;
 dec=dec/8;
 oct=oct+rem*pow(10,i);
 i++;}
 printf("The octal equivalent of number is: %d", oct);
 getch();
 }


