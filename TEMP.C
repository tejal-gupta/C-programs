#include<stdio.h>
#include<conio.h>

void main()
{float c, f, t;
 clrscr();
 printf("Enter the temperature in degree Fahrenheit= ");
 scanf("%f", &f);
 t=(5.000/9.000);
 c=((f-32)* t);
 printf("Temperature in degree Celsius= %f", c);
 getch();}