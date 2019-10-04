#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
struct node
{
 int data;
 struct node *next;
}*start=NULL,*q,*t;
void main()
{
 int ch;
 void create();
 void insert_beg();
 void insert_end();
 int  insert_pos();
 void display();
 void delete_beg();
 void delete_end();
 int  delete_pos();
 clrscr();
 while(1)
 {
  printf("\nSingle linked list:");
  printf("\n1.Create\n2.Insert\n3.Display\n4.Delete\n5.Exit\n");
  printf("Enter your choice(1-5):");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:create();
	break;
   case 2:
	printf("\n Insert option");
	printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at position\n4.Exit\n");
	printf("Enter your choice(1-4):");
	scanf("%d",&ch);
	switch(ch)
	{
	 case 1: insert_beg();
	       break;
	 case 2: insert_end();
	       break;
	 case 3: insert_pos();
	       break;
	 case 4: exit(0);

	 default: printf("Wrong choice");
	}
	break;
   case 3:display();
	break;
   case 4:printf("Delete menu");
	printf("\n1.Delete from beginning\n2.Delete from end\n3.Delete from position\n4.Exit");
	printf("\nEnter your choice(1-4):");
	scanf("%d",&ch);
	switch(ch)
	{
	 case 1:delete_beg();
		break;
	 case 2:delete_end();
		break;
	 case 3:delete_pos();
		break;
	 case 4:exit(0);

	 default:printf("Wrong choice");
	}
	break;
   case 5:exit(0);

   default:printf("Wrong choice");
  }
 }
}
void create()
{
 t=(struct node*)malloc(sizeof(struct node));
 printf("Enter the data in the node:\n");
 scanf("%d",&t->data);
 t->next=NULL;
 if(start==NULL)
 {
  start=t;
  q=t;
 }
 else
 {
  q->next=t;
  q=t;
 }
}
void insert_beg()
{
 int num;
 t=(struct node*)malloc(sizeof(struct node));
 printf("Enter data:");
 scanf("%d",&num);
 t->data=num;
 if(start==NULL)
 {
  t->next=NULL;
  start=t;
 }
 else
 {
  t->next=start;
  start=t;
 }
}
void insert_end()
{
 int num;
 t=(struct node*)malloc(sizeof(struct node));
 printf("Enter data:");
 scanf("%d",&num);
 t->data=num;
 t->next=NULL;
 if(start==NULL)
 {
  start=t;
 }
 else
 {
  q=start;
  while(q->next!=NULL)
   q=q->next;
  q->next=t;
 }
}
int insert_pos()
{
 int pos,num,i;
 if(start==NULL)
 {
  printf("List is empty");
  return 0;
 }
 t=(struct node*)malloc(sizeof(struct node));
 printf("Enter data::");
 scanf("%d",&num);
 printf("\n Enter position to be inserted:");
 scanf("%d",&pos);
 t->data=num;
 q=start;
 for(i=1;i<pos-1;i++)
 {
  if(q->next==NULL)
  {
   printf("There are less elements\n");
   return 0;
  }
  q=q->next;
 }
 t->next=q->next;
 q->next=t;
 return 0;
}
void display()
{
 if(start==NULL)
 printf("List is empty");
 else
 {
  q=start;
  printf("The linked list is\n");
  while(q!=NULL)
  {
   printf("%d->",q->data);
   q=q->next;
  }
 }
}
void delete_beg()
{
 if(start==NULL)
 printf("The list is empty");
 else
 {
  q=start;
  start=start->next;
  printf("Deleted element is %d",q->data);
  free(q);
 }
}
void delete_end()
{
 if(start==NULL)
  printf("The list is empty");
 else
 {
  q=start;
  while(q->next->next!=NULL)
   q=q->next;
  t=q->next;
  q->next=NULL;
  printf("Deleted element is %d",t->data);
  free(t);
 }
}
int delete_pos()
{
 int pos,i;
 if(start==NULL)
 {
  printf("List is empty");
  return 0;
 }
 else
 {
  printf("Enter position to delete");
  scanf("%d",&pos);
  q=start;
  for(i=1;i<pos-1;i++)
  {
   if(q->next==NULL)
   {
    printf("There are less elements");
    return 0;
   }
   q=q->next;
  }
  t=q->next;
  q->next=t->next;
  printf("Deleted element is %d",t->data);
 }
 free(t);
 return 0;
}












