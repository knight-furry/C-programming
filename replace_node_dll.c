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
	while(p->next != NULL)
	{
		printf("%d-->",p->data);
		p=p->next;
	}
	printf("%d\n",p->data);
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

void xyz(struct node** head,struct node** n)
{
	struct node* temp=*head;
	
	if(temp->next==NULL)
	{
		*head=*n;
		
		free(temp);
	}
	else
	{
		(*n)->next=temp->next;
		temp->next->prev=*n;
		*head=*n;
		free(temp);
	}
}

void xyzw(struct node** head,struct node** new)
{
	struct node* temp=*head;
	while(temp->next != NULL)
	{
		temp=temp->next;
	}
	(*new)->prev=temp->prev;
	temp->prev->next=*new;
	free(temp);
}

void replace(struct node** head)
{
	int x,i,count;
	struct node* p=*head;
	struct node* temp=creatnode();
	count=countnode(*head);
	printf("Enter the required position :\n");
	scanf("%d",&x);
	if(*head==NULL)
	{
		printf("\nNo linklist found...!\n");
	}
	else if(x==1)
	{
		xyz(head,&temp);
	}
	else if(x == count)
	{
		xyzw(head,&temp);
	}
	else if(x < 1 || x > count)
	{
		printf("Enter valide position.....!\n");
		replace(head);
	}
	else
	{
		for(i=1;i<x;i++)
		{
			p=p->next;
		}
		temp->next=p->next;
		temp->prev=p->prev;
		p->prev->next=temp;
		p->next->prev=temp;
		free(p);
	}
}

void main()
{
	int choice;
	struct node* first=NULL;
	do
	{
		printf("\n***********LINK LIST*************\n");
		printf("1.creatlinklisted\n2.display\n3.Replace node\n4.Exit\n");
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
				printf("\n");
				replace(&first);
				printf("Succesfully done...!\n");
				break;
		}
	}while(choice != 4);
}
