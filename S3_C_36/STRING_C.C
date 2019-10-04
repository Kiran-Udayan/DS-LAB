//string concatination
#include<stdio.h>
#include<conio.h>
void main()
{
 char first[50],second[50];
 int  i,count1,j,count2;
 clrscr();
 printf("FIRST STRING:\n");
 gets(first);
 printf("SECOND STRING:\n");
 gets(second);
 count1=0;
 for(i=0;first[i]!='\0';i++)
  count1++;
 count2=0;
 for(j=0;second[j]!='\0';j++)
  count2++;
 for(i=count1,j=0;j<count2;i++,j++)
  first[i]=second[j];
 first[i]='\0';
 printf("THE STRINGS ARE CONCATINATED:\n");
  puts(first);
 getch();
}