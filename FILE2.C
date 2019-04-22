#include<stdio.h>
#include<conio.h>

void main()
{ FILE *fp;


 char s[80];
 clrscr();
  fp= fopen("newfile.c", "a");

  printf("Enter a few lines of the text: ");
  while(strlen(gets(s))>0)
  {fputs(s,fp);
   fputs("\n",fp);}


   fclose(fp);
  getch();}

