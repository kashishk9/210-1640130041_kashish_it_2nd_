#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node* add;
};

 void display(struct node* head)     
 {
 	struct node* p=head;
 	while(p!=NULL)
 	{
 		printf("%d->",p->data);
 		p=p->add;
	 }
	 return;
 }

struct node* mid_linkedlist(struct node*head)
{
	struct node*f=(struct node*)malloc(sizeof(struct node));
	struct node*s=(struct node*)malloc(sizeof(struct node));
while(f!=NULL && f->add!=NULL && f->add->add!=NULL)
{
	s=s->add;
	f=f->add->add;
}
return s;
}

int main()
{
	struct node* head=NULL,*first,*sec,*third,*fourth;
	first=(struct node*)malloc(sizeof(struct node));
	sec=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));
	first->data=10;
	first->add=sec;
	head=first;
	
	sec->data=20;
	sec->add=third;
	
	third->data=30;
	third->add=fourth;
	
	fourth->data=40;
	fourth->add=NULL;
	printf("before\n");
	display(head);
	printf("\nafter\n");
	head=mid_linkedlist(head);
	display(head);
return 0;
}
