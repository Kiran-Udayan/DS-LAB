//Linked List_menu driven
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
//creating node
struct node
{
	int data;
	struct node*link;

}*header=null,*temp1,*temp2,*ptr,*ptr1;

void main()
{
	void create();
	void insert_beg();
	void insert_end();
	void insert_pos();
	void display();
	void delete_beg();
	void delete_end();
	void delete_pos();
	int ch,ch_1,ch_2;
	clrscr();
	while(1)
	{
	 printf("\nSINGLE LINKED LIST MENU\n\t1.INSERT\n\t2.DELETE\n\t3.DISPLAY\n\t4.EXIT ");
	 printf("\nCHOICE:");
	 scanf("%d",&ch);
	 clrscr();
	 switch(ch)
	 {
	  case 1:printf("\nINSERT:\n\t1.AT THE BEGINING\n\t2.AT THE END\n\t3.AFTER A PARTICULAR ELEMENT");
		 printf("\nCHOICE:");
		 scanf("%d",&ch_1);
		 clrscr();
		 switch(ch_1)
		 {
			case 1:printf("\nINSERTION AT THE BEGINING");
			       insert_beg();
			       break;
			case 2:printf("\nINSERTION AT THE END");
			       insert_end();
			       break;
			case 3:printf("\nINSERTION AT POSITION");
			       insert_pos();
			       break;
			default:printf("\n\n\t\t!!!WRONG INPUT!!!");
		 }
		 break;
	  case 2:printf("\nDELETE:\n\t1.FROM THE BEGINING\n\t2.FROM THE END\n\t3.A PARTICULAR ELEMENT");
		 printf("\nCHOICE:");
		 scanf("%d",&ch_2);
		 clrscr();
		 switch(ch_2)
		 {
			case 1:printf("\nDELETION FROM THE BEGINING");
			       delete_beg();
			       break;
			case 2:printf("\nDELETION FROM THE END");
			       delete_end();
			       break;
			case 3:printf("\nDELETE AN ELEMENT");
			       delete_pos();
			       break;
			default:printf("\n\n\t\t!!!WRONG INPUT!!!");
		 }
		 break;
	  case 3:printf("\nDISPLAY");
		 display();
		 break;
	  case 4:exit(0);
	  default:printf("\n\n\t\t!!!WRONG INPUT!!!");
	 }
	 break;
	}
	getch();
}
void create()
{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(Header==NULL)
	{
	 Header=temp;
	 ptr=temp;
	}
	else
	{
	 ptr->link=temp;
	 ptr=temp;
	}
}