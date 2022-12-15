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

struct node* deleteathead(struct node* head )
{
	struct node* temp=head;
	head=head->address;
	free(temp);
	return head; 
}

int main()
{
	struct node* head=NULL,*first,*sec,*third,*fourth;
	first=(struct node*)malloc(sizeof(struct node));
	sec=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));
	first->data=10;
	first->address=sec;
	head=first;
	
	sec->data=20;
	sec->address=third;
	
	third->data=30;
	third->address=fourth;
	
	fourth->data=40;
	fourth->address=NULL;
     display(head);
	printf("\ndelete at head\n");
	head=deleteathead(head);
	display(head);
return 0;
}
