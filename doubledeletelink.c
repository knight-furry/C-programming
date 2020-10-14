#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
	struct node* prev;
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
		creatnode->prev=NULL;
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
			temp->prev=p;
		}
	
}

void display(struct node* head)
{
	struct node* p=head;
	if(p==NULL)
	{
		printf("\nLinklisted not found......!\n");
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

void daf(struct node** head)
{
	struct node* temp=*head;
	if(*head==NULL)
	{
		printf("\nNo linklist found....!\n");
	}
	else if((*head)->next==NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
	{
		temp=temp->next;
		free(temp->prev);
		temp->prev=NULL;
	}
}

void dal(struct node** head)
{
	struct node* temp=*head;
	if(*head==NULL)
	{
		printf("\nNo linklist found....!\n");
	}
	else if((*head)->next==NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp=temp->next;
		}
		temp->prev->next=NULL;
		free(temp);
	}
	
}

int countnode(struct node* head)
{
	int count=0;
	while(head != NULL)
	{
		count++;
		head=head->next;
	}
	return count;
}

void dap(struct node** head)
{
	struct node* temp=*head;
	
	int count=countnode(*head);
	int pos;
	printf("\nEnter the position:");
	scanf("%d",&pos);
	if(*head==NULL)
	{
		printf("\nNo linklist found....!\n");
	}
	else if(pos==1)
	{
		daf(head);
	}
	else if(pos==count)
	{
		dal(head);
	}
	else if(pos<1 || pos>count)
	{
		printf("\nInvalide position....!\nplz enter valide posion:");
		dap(head);
	}
	else
	{
		
		for(int i=1;i<pos;i++)
		{
			temp=temp->next;
		}
		temp->next->prev=temp->prev;
		temp->prev->next=temp->next;
		free(temp);
	}
	
}

void main()
{
	int choice;
	struct node* first=NULL;
	
	do
	{
		printf("\n***********LINK LIST*************\n");
		printf("1.creatlinklisted\n2.display\n3.Delete at first\n4.Delete at last\n5.Delete at position\n6.Exit\n");
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
				daf(&first);
				printf("\nDeletion successfull.....!\n");
				break;
			case 4:
				dal(&first);
				printf("\nDeletion successfull.....!\n");
				break;
			case 5:
				dap(&first);
				printf("\nDeletion successfull.....!\n");
				break;
		}
	}while(choice != 6);
}
