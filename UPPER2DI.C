#include<stdio.h>
#include<conio.h>

void main()
{int a[3][3], i, j, sum=0;
 clrscr();

 printf("Enter the numbers in first array: ");
 for(i=0; i<3; i++)
 {for(j=0; j<3; j++)
  {scanf("%d", &a[i][j]);}}

  printf("The matrix entered is: \n");

 for(i=0; i<3; i++)
 {for(j=0; j<3; j++)
  {printf("%d  ", a[i][j]);}
  printf("\n");}


  //addition of upper diagonal elements

 for(i=0; i<3; i++)
 {for(j=0;j<(3-i); j++)
   {sum=sum+a[i][j];}}

  printf("Sum of the upper triangle elements are: %d", sum);
    getch();}