//binary search
#include<stdio.h>
#include<conio.h>
void main()
{
 int A[100],item,n,temp,lwr,upr,mid,flag,pos,i,j;
 clrscr();
 temp=0;
 flag=0;
 printf("ARRAY SIZE:");
 scanf("%d",&n);
 printf("ELEMENTS:\n");
 for(i=0;i<n;i++)
  scanf("%d",&A[i]);
 //bubble sort
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
 //searching
 printf("\nNUMBER TO SEARCH:");
 scanf("%d",&item);
 lwr=0;
 upr=(n-1);
 flag=0;
 while(lwr<=upr)
 {
  mid=((lwr+upr)/2);
  if(A[mid]==item)
  {
   pos=(mid+1);
   flag=1;
   break;
  }
  else if(A[mid]<item)
  {
   lwr=mid;
  }
  else
  {
   upr=mid;
  }
 }
 if(flag!=0)
  printf("\nELEMENT FOUND AT POSITION %d",pos);
 else if(flag==0)
  printf("\nELEMENT NOT FOUND");
 getch();
}