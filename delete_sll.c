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
	struct node* temp=NULL;
	
	if(*head==NULL)
	{
		printf("\nNo linklist found....!\n");
	}
	else
	{
		temp=*head;
		*head=(*head)->next;
		free(temp);
	}
}

void dal(struct node** head)
{
	struct node* temp1=*head;
	struct node* temp2=*head;
	
	if(*head==NULL)
	{
		printf("\nNo linklist found....!\n");
	}
	else if(temp1->next->next==NULL)
	{
		
		
			free(temp1->next);
			temp1->next=NULL;
		
	}
	else
	{
		while(temp2->next != NULL)
		{
			temp1=temp1->next;
			temp2=temp1->next;
		}
		free(temp2);
		temp1->next=NULL;
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
	struct node* temp1=*head;
	struct node* temp2=NULL;
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
		
		for(int i=1;i<pos-1;i++)
		{
			temp1=temp1->next;
		}
		temp2=temp1->next;
		temp1->next=temp2->next;
		free(temp2);
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
