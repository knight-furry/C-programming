#include<stdio.h>
#include<malloc.h>

struct student
{
	char name[20];
	int rollno;
	int mark;
	struct student* next;
};

struct student* creatnode()
{
	struct student* newnode=NULL;
	newnode=(struct student*)malloc(sizeof(struct student));
	if(newnode==NULL)
	{
		printf("\nMemory not allowcate.......!\n");
	}
	else
	{
		printf("\nEnter Name:");
		scanf("%s",&newnode->name);
		printf("\nEnter the roll number:");
		scanf("%d",&newnode->rollno);
		printf("\nEnter marks:");
		scanf("%d",&newnode->mark);
		newnode->next=NULL;
		return newnode;
	}
}

void creatlink(struct student** head)
{
	struct student* tempnode=NULL;
	struct student* p=*head;
	tempnode=creatnode();
	
	if(*head==NULL)
	{
		*head=tempnode;
	}
	else
	{
		while(p->next != NULL)
		{
			p=p->next;
		}
		p->next=tempnode;
	}
}

void display(struct student* head)
{
	printf("\nRoll no\tName\tmarks\n");
	while(head != NULL)
	{
		printf("%d\t%s\t%d\n",head->rollno,head->name,head->mark);
		head=head->next;
	}
}

int sort(struct student** head)
{
	struct student* temp=*head;
	struct student* temp1=NULL;
	int temp2;
	
	while(temp != NULL)
	{
		temp1=temp->next;
		while(temp1 != NULL)
		{
	      	if(temp->mark > temp1->mark)
			{
				temp2=temp->mark;
				temp->mark=temp1->mark;
				temp1->mark=temp2;
			}
			temp1=temp1->next;
		}
		temp=temp->next;
	}
	
}


void main()
{
	int choice,i,count=0;
	struct student* first=NULL;
	do
	{
		printf("\n==========LINKLISTED=========\n");
		printf("1.Createlinklist\n\t2.Display\n\t\t3.sort by marks\n\t\t\t4.Exit.");
		
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
				sort(&first);
				printf("\nSorting done successfully....!\n");
				break;
		}
	}while(choice != 4);
}

