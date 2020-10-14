#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node* next;
	struct node* prev;
};


struct node* creatnode()
{
	struct node* creatnode=NULL;
	creatnode=(struct node*)malloc(sizeof(struct node));
	if(creatnode==NULL)
	{
		printf("Memory not allocate....!\n");
	}
	else
	{
		printf("\nEnter the data:\n");
		scanf("%d",&creatnode->data);
		creatnode->next=NULL;
		creatnode->prev=NULL;
		return creatnode;
	}
}

void creatlink(struct node** head,struct node** head1)
{
	struct node* p=*head;
	struct node* temp=NULL;
	temp=creatnode();
	
		if(*head==NULL)
		{
			*head=temp;
			*head1=temp;
		}
		else
		{
			while(p->next !=  NULL)
			{
				p=p->next;
			}
			p->next=temp;
			temp->prev=p;
			*head1=temp;
		}
	
}

void display(struct node* head)
{
	struct node* p=head;
	while(p->next != NULL)
	{
		printf("%d-->",p->data);
		p=p->next;
	}
	printf("%d\n",p->data);
}

void search(struct node* head,struct node* head1)
{
	int data,flag=0;
	printf("\nEnter the element that you want to search:");
	scanf("%d",&data);
	while(head <= head1)
	{
		if(head->data==data || head1->data==data)
		flag++;
		head=head->next;
		head1=head1->prev;
	}
	if(flag==0)
	printf("\nThe element not found.....!\n");
	else
	printf("\nThe element found.....!\n");
}

void main()
{
	int choice;
	struct node* first=NULL;
	struct node* last=NULL;
	do
	{
		printf("\n***********LINK LIST*************\n");
		printf("1.creatlinklisted\n2.display\n3.Search\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				creatlink(&first,&last);
				printf("\nLink list created successfully...!\n");
				break;
			case 2:
				printf("\nGiven linklsted is:\n");
				display(first);
				break;
			case 3:
				printf("\n");
				search(first,last);
				break;
		}
	}while(choice != 4);
}
