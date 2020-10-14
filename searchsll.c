#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node* next;
};

struct node* creatnode();
void creatlink(struct node** head);
void display(struct node* head);

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

void creatlink(struct node** head)
{
	struct node* p=*head;
	struct node* temp=NULL;
	temp=creatnode();
	
		if(*head==NULL)
		{
			*head=temp;
		}
		else
		{
			while(p->next !=  NULL)
			{
				p=p->next;
			}
			p->next=temp;
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

void searchlink(struct node* head)
{
	int data,flag=0;
	printf("Enter the data what you want to search:\n");
	scanf("%d",&data);
	
	while(head != NULL)
	{
		if(head->data==data)
		{
			flag++;
		}
		head=head->next;
	}
	if(flag==0)
	printf("\nThe data is not found....!\n");
	else
	printf("\nThe data is found==%d\n",data);
	
}


void main()
{
	int choice;
	struct node* first=NULL;
	do
	{
		printf("\n***********LINK LIST*************\n");
		printf("1.creatlinklisted\n2.display\n3.search\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				creatlink(&first);
				printf("\nLink list created successfully...!\n");
				break;
			case 2:
				printf("\nGiven linklsted is:\n");
				display(first);
				break;
			case 3:
				searchlink(first);
				break;
		}
	}while(choice != 4);
}
