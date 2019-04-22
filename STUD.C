#include<stdio.h>
#include<conio.h>

void main()
{int s1=0, s2=0, s3=0, s4=0, agg=0;
 char grade;
 clrscr();
 printf("\n Enter the marks of student in four subjects: ");
 scanf("%d%d%d%d", &s1, &s2, &s3, &s4);

 agg=(s1+s2+s3+s4)/4;
 if(agg>90&&agg<=100)
 {grade='A';}
 else if(agg<=90&&agg>80)
 {grade='B';}
 else if(agg>70&&agg<=80)
 {grade='C';}
 else if(agg>60&&agg<=70)
 {grade='D';}
 else if(agg>50&&agg<=60)
 {grade='E';}
 else
 {grade='F';}

 printf(" Aggregate score of the student is: %d", agg);
 printf("\n Grade of the student is: %c", grade);
 getch();
 }