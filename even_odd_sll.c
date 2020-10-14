#include<stdio.h>
#include<malloc.h>

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

void creatlink(struct node** head,struct node** head1,struct node** head2)
{
	struct node* p=*head;
	struct node* temp=NULL;
	struct node* temp1=*head1;
	struct node* temp2=*head2;

	temp=creatnode();
	
		if(*head==NULL)
		{
			*head=temp;
			if((temp->data)%2==0)
			*head1=temp;
			else
			*head2=temp;
		}
		else
		{
			while(p->next !=  NULL)
			{
				p=p->next;
			}
			p->next=temp;
			
			if((temp->data)%2==0)
			{
				if(*head1==NULL)
				*head1=temp;
				else
				{
					while(temp1->next != NULL)
					temp1=temp1->next;
					temp1->next=temp;
				}
			}
			else
			{
				if(*head2==NULL)
				*head2=temp;
				else
				{
					while(temp2->next != NULL)
					temp2=temp2->next;
					temp2->next=temp;
				}
			}
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


/*
void eolink(struct node** head,struct node** head1,struct node** head2)
{
	struct node* temp1=*head1;
	struct node* temp2=*head2;
	struct node* temp=*head;
	struct node* p=NULL;
	struct node* q=NULL;
	
	while(temp != NULL)
	{
		if((temp->data)%2 == 0)
		{
			if(temp1==NULL)
			{
			temp1=*head;
			temp1->next=NULL;
			}
			else
			{
				p=temp1;
				while(p->next != NULL)
				{
					p=p->next;
				}
				p->next=*head;
			}
			
		}
		else
		{
			if(temp2==NULL)
			{
			temp2=*head;
			temp2->next=NULL;
			}
			else
			{
				q=temp2;
				while(q->next != NULL)
				{
					q=q->next;
				}
				q->next=*head;
			}
			
		}
		temp=temp->next;
	}
	
}
*/

void main()
{
	int choice;
	struct node* first=NULL;
	struct node* first1=NULL;
	struct node* first2=NULL;
	do
	{
		printf("\n***********LINK LIST*************\n");
		printf("1.creatlinklisted\n2.display\n3.divide linklist in even/odd... \n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				creatlink(&first,&first1,&first2);
				printf("\nLink list created successfully...!\n");
				break;
			case 2:
				printf("\nGiven linklsted is:\n");
				display(first);
				break;
			case 3:
				//eolink(&first,&first1,&first2);
				//printf("\nSeperating done successfully.....!\n");
				printf("\n1.Even linklist\t2.Odd linklist\n");
				printf("enter your choice:");
				scanf("%d",&choice);
				if(choice==1)
				{
					display(first1);
					break;
				}
				else
				{
					display(first2);
					break;
				}
		}
	}while(choice != 4);
}
