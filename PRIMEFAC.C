#include<stdio.h>
#include<conio.h>

void main()
{int num, i=1, j, k;
 printf("Enter a number to find its prime factors: ");
 scanf("%d", &num);

 while(i<=num);
 {k=0;
  if(num%i==0)
  {j=1;}
  while(j<=i)
  {if(i%j==0)
   {k++;}
   j++;}
   if(k==2)
   {printf("%d is a prime factor of the number", i);}
   i++;}
   getch();
   }