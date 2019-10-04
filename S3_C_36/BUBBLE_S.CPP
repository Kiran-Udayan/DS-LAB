//bubble sort
#include<stdio.h>
#include<conio.h>
void main()
{
 int A[100],n,temp,i,j;
 clrscr();
 printf("ARRAY SIZE:");
 scanf("%d",&n);
 printf("ENTER ELEMENTS:\n");
 for(i=0;i<n;i++)
  scanf("%d",&A[i]);
 for(i=1;i<n;i++)
 {
  for(j=0;j<n-i;j++)
  {
   if(A[j]>A[j+1])
    {
     temp=A[j];
     A[j]=A[j+1];
     A[j+1]=temp;
    }
  }
 }
 printf("SORTED ARRAY:\n");
 for(i=0;i<n;i++)
  printf("%d ",A[i]);
 getch();
}