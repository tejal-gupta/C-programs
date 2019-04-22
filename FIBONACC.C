#include<stdio.h>
#include<conio.h>

 void main()
 { clrscr();
  fibonacci();
  getch();}


 int fibonacci()
 {long int i=0, next=0, first=0, second=1;
  for(i=0; i<25; i++)
  {next= first+ second;
   first=second;
   second=next;
   printf("%ld ", next);}
   return 0;}