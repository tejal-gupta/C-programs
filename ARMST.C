#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{int num, numo, temp, sum=0;
 clrscr();
 printf("Enter the number to check whether its Armstrong number= ");
 scanf("%d",&num);
 numo=num;

 while(numo!=0)
 {temp=numo%10;
  sum=sum+(temp*temp*temp);
  numo=numo/10;}
  printf("answer= %d", sum);

 if(sum==num)
 {printf("\nThe given number is Armstrong Number");}
 else
 {printf("\nThe given number is NOT an Armstrong Number");}
 getch();}













