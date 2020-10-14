#include<stdio.h>
#include<malloc.h>

struct node
{
	struct node* prev;
	int data;
	struct node* next;
};

struct node* creatnode()
{
	struct node* newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("\nMemory not allowcate.......!\n");
	}
	else
	{
		printf("\nEnter data:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		newnode->prev=NULL;
		return newnode;
	}
}

void creatlink(struct node** head)
{
	struct node* newnode=NULL;
	struct node* p=*head;
	newnode=creatnode();
	
	if(*head==NULL)
	{
		*head=newnode;
	}
	else
	{
		while(p->next != NULL)
		{
			p=p->next;
		}
		p->next=newnode;
		newnode->prev=p;
	}
}

void display(struct node* head)
{
	while(head != NULL)
	{
		printf("%d--->",head->data);
		head=head->next;
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

void insertfirst(struct node** head)
{
	struct node* newnode=NULL;
	newnode=creatnode();
	if(*head==NULL)
	{
		*head=newnode;
	}
	else
	{
		newnode->next=*head;
		(*head)->prev=newnode;
		*head=newnode;
	}
}

void insertpos(struct node** head)
{
	int count,pos,i;
	struct node* newnode=NULL;
	struct node* tempnode=*head;

	count=countnode(*head);
	printf("\nInsert the position:");
	scanf("%d",&pos);
	
	if(pos==1)
	{
		insertfirst(head);
	}
	else if(pos==count+1)
	{
		creatlink(head);
	}
	else if(pos<1 || pos>count+1)
	{
		printf(".....Invalide position\nplease enter correct one:");
		insertpos(head);
	}
	else
	{
		newnode=creatnode();
		for(i=1;i<pos-1;i++)
		{
			tempnode=tempnode->next;
		}
		newnode->next=tempnode->next;
		newnode->prev=tempnode;
		tempnode->next=newnode;
		newnode->next->prev=newnode;
	}
}

void main()
{
	int choice,i,count=0;
	struct node* first=NULL;
	do
	{
		printf("\n==========LINKLISTED=========\n");
		printf("1.Createlinklist\n\t2.Display\n\t\t3.Insert at first\n\t\t\t");
		printf("4.Insert at last\n\t\t5.Insert at position\n\t6.Exit\n");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				creatlink(&first);
				break;
			case 2:
				display(first);
				break;
			case 3:
				insertfirst(&first);
				break;
			case 4:
				creatlink(&first);
				break;
			case 5:
				insertpos(&first);
				break;
		}
	}while(choice != 6);
}
