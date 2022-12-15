#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* address;
}s;

struct node* insertatend(struct node* head , int data)
{
		struct node* node=(struct node*)malloc(sizeof(struct node));
		struct node* s;
		node->data=data;
		node->address=NULL;
		if(head==NULL);
		{
			head=node;
		}
			s=head;
		while(s->address!=NULL)
			{
				s=s->address;
			} 
			s->address=node;
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
	
	printf("\nafter insert end= ");
	head=insertatend(head,67);
	display(head);

	return 0;
}
