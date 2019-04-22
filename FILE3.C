#include<stdio.h>
#include<conio.h>

void main()
{ FILE *fp;


 char ch[100];
 clrscr();
  fp= fopen("newfile.c", "r");

  while(fgets(ch, 100, fp)!=NULL)
  {printf("%s",ch);}
  printf("\n");


  fclose(fp);
  getch();}

