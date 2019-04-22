#include<stdio.h>
#include<conio.h>

void main()
{ FILE *fp;

 struct emp
 {char name[40];
  int age;
  float bs;};
  struct emp e;

 clrscr();
  fp= fopen("newfile2.c", "r");

  if(fp==NULL)
  {puts("cannot open file");
   exit(1);}

   while(fscanf(fp, "%s %d %f", e.name, &e.age, &e.bs)!=EOF)
   {printf("%s %d %f\n", e.name, e.age, e.bs);}

    fclose(fp);
    getch();}


