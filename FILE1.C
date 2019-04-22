#include<stdio.h>
#include<conio.h>

void main()
{ file *fp;
 fp= fopen("newfile.c", "w+");

 char s[80];

 if(fp==NULL)
 {puts("Cannot open file");
  exit(1);}

  printf("Enter a few lines of the text: ");
  while(strlen(gets(S))>0)
  {fputs(s,fp);
   fputs("\n",fp);}

   fclose(fp);
  getch();}

 while(1)
 {ch=fgetc(fp);
  if(ch==EOF)
  {break;}
  printf("%c",ch);}

  printf("\n");
  fclose(fp);
  return 0;}
