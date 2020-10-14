
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* createnode()
{
	struct node* newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Memory not allowcate....!\n");
	}
	else
	{
		printf("\nEnter the data:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		return newnode;
	}
}

void push(struct node** head,struct node** top)
{
	struct node* newnode=NULL;
	newnode=createnode();
	if(*head==NULL)
	{
		*head=newnode;
		*top=newnode;
	}
	else
	{
		newnode->next=*head;
		*top=newnode;
		*head=newnode;
	}
}

void pop(struct node** head,struct node** top)
{
	struct node* temp=NULL;
	struct node* top1=NULL;
	
	if(*head==NULL)
	{
		printf("\nStack is empty....!\n");
	}
	else
	{
		temp=*head;
		top1=*top;
		*head=(*head)->next;
		*top=(*top)->next;
		//free(top1);
		free(temp);
		
	}	
}

void display(struct node* head)
{
	struct node* p=head;
	if(p==NULL)
	{
		printf("\nStack is empty......!\n");
	}
	else
	{
	while(p->next != NULL)
	{
		printf("%d<---",p->data);
		p=p->next;
	}
	printf("%d\n",p->data);
	}
}

void main()
{
	struct node* first=NULL;
	struct node* top=NULL;
	int choice;
	
	do
	{
		printf("\n***********STACK OPERATION*************\n");
		printf("1.push\n2.pop\n3.display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push(&first,&top);
				printf("\nPush operation done successfully...!\n");
				break;
			case 2:
				if(first != NULL)
				{
				pop(&first,&top);
				printf("\nPoping element done successfull.....!\n");
				}
				else
				{
					printf("\nstack is empty.....!\n");
				}
				break;
			case 3:
				printf("The given stack is:\n");
				display(first);
				break;
		}
	}while(choice !=4);
}
