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

void merge(struct node** head1,struct node** head2)
{
	struct node* temp1=NULL;
	struct node* temp2=NULL;
	
	temp1=*head1;
	while(temp1->next != NULL)
	{
		temp1=temp1->next;
	}
	temp1->next=*head2;
}


void main()
{
	int choice;
	struct node* first=NULL;
	struct node* first1=NULL;
	do
	{
		printf("\n***********LINK LIST*************\n");
		printf("1.creatlinklisted first\n2.display first linklist\n3.creatlinklist second\n4.display second linklist\n5.merge linklist\n6.display after merging\n7.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				creatlink(&first);
				break;
			case 2:
				printf("\nGiven linklsted is:\n");
				display(first);
				break;
			case 3:
				creatlink(&first1);
				break;
			case 4:
				display(first1);
				break;
			case 5:
				merge(&first,&first1);
				printf("\nMerging done successfully....!\n");
				break;
			case 6:
				display(first);
				break;	
		}
	}while(choice != 7);
}
