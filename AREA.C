#include<stdio.h>
#include<conio.h>

void main()
{ float l, b, h, r, ar=0;
  int k=0;
  clrscr();
  printf("Choose one operation: ");
  scanf("%d", &k);

  if(k==1)
  {printf("Enter length and breadth of the rectangle: ");
   scanf("%f %f",&l,&b);
   ar=l*b;
   printf("Area of rectangle is: %f", ar);}

   else if(k==2)
   {printf("Enter radius of the circle: ");
    scanf("%f", &r);
    ar=3.14*r*r;
    printf("Area of circle is: %f", ar);}

    else if(k=3)
   {printf("Enter base and height of triangle: ");
    scanf("%f%f",&b,&h);
    ar=0.5*b*h;
    printf("Area of triangle is: %f", ar);}

   else
   {printf("Wrong number");}

   getch();}
