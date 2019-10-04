//linear search
#include<stdio.h>
#include<conio.h>
void main()
{
 int A[100],n,item,flag,i,j;
 clrscr();
 flag=0;
 printf("ARRAY SIZE:");
 scanf("%d",&n);
 printf("ELEMENTS:\n");
 for(i=0;i<n;i++)
  scanf("%d",&A[i]);
 printf("NUMBER TO SEARCH:");
 scanf("%d",&item);
 for(j=0;j<n;j++)
 {
  if(A[j]==item)
  {
   flag=(j+1);
  }
 }
 if(flag==0)
  printf("ELEMENT NOT FOUND");
 else
  printf("ELEMENT FOUND AT POSITION %d",flag);
 getch();
}