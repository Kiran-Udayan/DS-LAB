//substring identification
#include<stdio.h>
#include<conio.h>
void main()
{
 char str[100],substr[100];
 int i,j;
 clrscr();
 printf("STRING:\n");
 gets(str);
 printf("SUBSTRING TO CHECK:");
 gets(substr);
 j=0;
 for(i=0;str[i]!='\0'&& substr[j]!='\0';i++)
 {
  if(str[i]==substr[j])
  {
   j++;
  }
  else
  {
   j==0;
  }
 }
 if(j==0)
  printf("SUBSTRING IS NOT PRESENT");
 else
  printf("SUBSTRING PRESENT");
 getch();
}
