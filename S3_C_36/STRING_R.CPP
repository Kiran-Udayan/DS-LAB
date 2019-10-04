//string reversing
#include<conio.h>
#include<stdio.h>
void main()
{
 char str[100];
 int count,l;
 clrscr();
 printf("ENTER THE STRING:");
 gets(str);
 count=0;
 for(int i=0;str[i]!='\0';i++)
  count++;
 printf("THE REVERSE IS:");
 for(i=count-1;i>=0;i--)
  printf("%c",str[i]);
 getch();
}