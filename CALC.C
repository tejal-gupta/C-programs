#include<stdio.h>
#include<conio.h>
float main()
{ float ch ,a , b, res;
clrscr();

printf("                             CALCULATOR                          ");
printf("\nChoose an operation to proceed\n");
printf(" 1. ADDITION\n 2. SUBTRACTION\n 3. MULTIPLICATION\n 4. DIVISION\n ");
scanf("%f",&ch)
if( ch==1 )
  {printf("enter the first number= ");
   scanf("%f",&a);
   printf("enter the second number= ");
   scanf("%f",&b);
   res=a+b;
   printf("Sum of the two numbers is= %f",res);}
else if( ch==2 )
  {printf("enter the first number= ");
   scanf("%f",&a);
   printf("enter the second number= ");
   scanf("%f",&b);
   res=a-b;
   printf("Difference of the two numbers is= %f",res);}
else if( ch==3 )
  {scanf("enter the first number= ");
   scanf("%f",&a);
   printf("enter the second number= ");
   scanf("%f",&b);
   res=a*b;
   printf("Product of the two numbers is= %f",res);}
else if( ch==4 )
   {printf("enter the first number= ");
    scanf("%f",&a);
    printf("enter the second number= ");
    scanf("%f",&b);
    res=a/b;
    printf("Quotient of the two numbers is= %f",res);}
else
    { printf("You entered a wrong number. enter numbers from 1 to 4\n Press any key");}


getch();
return 0;}