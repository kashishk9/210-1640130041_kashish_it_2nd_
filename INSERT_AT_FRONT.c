#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* address;
}s;

struct node* insertatfront(struct node *head,int data)
{
	
	struct node* node=(struct node*)malloc(sizeof(struct node));
	
	node->data=data;
	node->address=head;
	head=node;
	return head;
}

void display(struct node *head)
{
	struct node* s=head;
	while(s!=NULL)
	{
		printf("%d",s->data);
		s=s->address;
	}
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
	
	head=insertatfront(head,40);
	  printf("\nafter insert= ");
	  display(head);

	return 0;
}
