//slection sort
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int A[100],n,temp=0;
 cout<<"ARRAY SIZE:";
 cin>>n;
 cout<<"ENTER THE ELEMENTS:"<<endl;
 for(int i=0;i<n;i++)
  cin>>A[i];
 for(i=0;i<n-1;i++)
  for(int j=i+1;j<n;j++)
  {
   if(A[i]>A[j])
   {
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
   }
  }
 cout<<"THE SORTED ARRAY IS:"<<endl;
 for(j=0;j<n;j++)
  cout<<A[j]<<" ";
 getch();
}
