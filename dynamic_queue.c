#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
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
		return creatnode;
	}
}

void push(struct node** head,struct node** rear,struct node** front)
{
	struct node* p=*head;
	struct node* q=*rear;
	struct node* newnode=NULL;
	newnode=creatnode();
	
		if(*head==NULL)
		{
			*head=newnode;
			*rear=*front=newnode;
		}
		else
		{
			while(p->next !=  NULL)
			{
				p=p->next;
				q=q->next;
			}
			p->next=newnode;
			q->next=newnode;
		}
	
}


void pop(struct node** head,struct node** front)
{
	struct node* temp=NULL;
	//struct node* front1=NULL;
	
	if(*head==NULL)
	{
		printf("\nQueue is empty....!\n");
	}
	else
	{
		temp=*head;
		//front1=*front;
		*head=(*head)->next;
		*front=(*front)->next;
		//free(top1);
		free(temp);
		
	}	
}



void display(struct node* head)
{
	struct node* p=head;
	if(p==NULL)
	{
		printf("\nQueue is empty......!\n");
	}
	else
	{
	while(p->next != NULL)
	{
		printf("%d-->",p->data);
		p=p->next;
	}
	printf("%d\n",p->data);
	}
}

void main()
{
	int choice;
	struct node* first=NULL;
	struct node* front=NULL;
	struct node* rear=NULL;
	
	do
	{
		printf("\n***********QUEUE OPERATION*************\n");
		printf("1.Inqueue\n2.Deaqueue\n3.display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push(&first,&rear,&front);
				printf("\nPush operation done successfully...!\n");
				break;
			case 2:
				pop(&first,&front);
				printf("\nPoping element done successfull.....!\n");
				break;
			case 3:
				printf("The given stack is:\n");
				display(first);
				break;
		}
	}while(choice !=4);
}

