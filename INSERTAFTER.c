#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* address;
}s;

void display(struct node *head)
{
	struct node* s=head;
	while(s!=NULL)
	{
		printf("%d",s->data);
		s=s->address;
	}
}

struct node* insertafter(struct node* head,int data,int dataafter)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	struct node* s=head;
	node->address=NULL;
	
	while(s->data!=dataafter)
	{
		s=s->address;
	}
		node->address=s->address;
		s->address=node;
		return head;
}

int main()
{
	struct node* head=NULL,*first,*sec,*third;
	first=(struct node*)malloc(sizeof(struct node));
	sec=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	
	first->data=10;
	first->address=sec;
	head=first;
	sec->data=20;
	sec->address=third;
	
	third->data=30;
	third->address=NULL;
	

	printf("before= ");
	display(head);
	
	
	   printf("\ninsert after= ");
	   head=insertafter(head,93,2);
	   display(head);

	return 0;
}
