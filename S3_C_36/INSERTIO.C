//insertion_sort
#include<stdio.h>
#include<conio.h>
void main()
{
 int t,j,i,a[100],n;
 clrscr();
 printf("ENTER THE NUMBER OF ELEMENTS:\n");
 scanf("%d",&n);
 printf("ENTER THE ELEMENTS:\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 //sorting...
 for(i=1;i<n;i++)
 {
  j=i;
  while(j>0 && a[j-1]>a[j])
  {
   t=a[j];
   a[j]=a[j-1];
   a[j-1]=t;
   j--;
  }
 }
 printf("THE SORTED ARRAY IS:\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
 getch();
}
