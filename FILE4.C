#include<stdio.h>
#include<conio.h>

void main()
{ FILE *fp;
 char another='Y';

 struct emp
 {char name[40];
  int age;
  float bs;};
  struct emp e;

 clrscr();
  fp= fopen("newfile2.c", "w");

  if(fp==NULL)
  {puts("cannot open file");
   exit(1);}

   while(another=='Y')
   {printf("enter name, age, basic sal:");
    scanf("%s %d %f",e.name,&e.age, &e.bs);
    fprintf(fp, "%s %d %f", e.name, e.age, e.bs);

    printf("Add another record(Y/N)");
    fflush(stdin);
    another=getche();
    }
    fclose(fp);
    getch();}


