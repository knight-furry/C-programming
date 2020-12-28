#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
	char *name;
	int age;
	int rollno;
	float marks;
	struct student* next;
};

char* fun()
{
	scanf(" ");
	int i=0;
	char *p = NULL;
	p = (char *)malloc(sizeof(char));
	while(1)
	{
		scanf("%c", p+i);
		if(*(p+i) == '\n')
		{
			*(p+i) = '\0';
			break;
		}
		i++;
	}
	return p;
}

struct student* CreateNode()
{
	struct student* newnode = NULL;
	newnode = (struct student*)malloc(sizeof(struct student));
	if(newnode == NULL)
	{
		printf("Memory not allocated...!\n");
	}
	else
	{
		printf("Enter student Name: ");
		newnode->name = fun();
		printf("Enter student Roll number: ");
		scanf("%d", &(newnode->rollno));
		printf("Enter student Age: ");
		scanf("%d", &(newnode->age));
		printf("Enter student Marks: ");
		scanf("%f", &(newnode->marks));
		newnode->next = NULL;
		return newnode;
	}
}

void CreateLinkedList(struct student** head)
{
	struct student* newnode = NULL;
	struct student* tempnode = *head;
	newnode = CreateNode();
	if(*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while(tempnode->next != NULL)
		{
			tempnode = tempnode->next;
		}
		tempnode->next = newnode;
	}
}


void SortLinkedList(struct student** head)
{
	struct student* temp=*head;
	struct student* temp1=NULL;
	float temp2;
	int a, b;
	char str[20];
	while(temp != NULL)
	{
		temp1 = temp->next;
		while(temp1 != NULL)
		{
	      	if((temp->marks) > (temp1->marks))
			{
				temp2 = temp->marks;
				temp->marks = temp1->marks;
				temp1->marks = temp2;
				strcpy(str, temp->name);
				strcpy(temp->name, temp1->name);
				strcpy(temp1->name, str);
				a = temp->age;
				temp->age = temp1->age;
				temp1->age = a;
				b = temp->rollno;
				temp->rollno = temp1->rollno;
				temp1->rollno = b;
			}
			temp1 = temp1->next;
		}
		temp = temp->next;
	}
}

void DisplayLinkedList(struct student* head)
{
	printf("Name \t Roll no \t Age \t Marks \n\n");
	while(head != NULL)
	{
		printf("%s \t", head->name);
		printf("%d \t\t", head->rollno);
		printf("%d \t", head->age);
		printf("%f \n\n", head->marks);
		head = head->next;
	}
}

void main()
{
	int choice;
	struct student* first = NULL;
	do
	{
		printf("\n===========================LinkedList===========================\n");
		printf("1. Create Student Linked List\n2. Display Student Linked List\n3. Sort data as per Student Marks\n4. Exit\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				CreateLinkedList(&first);
				printf("\nSuccessfully done..!\n");
				break;
			case 2:
				DisplayLinkedList(first);
				printf("\nThank you..!\n");
			case 3:
				SortLinkedList(&first);
				printf("\nSuccessfully Done....!\n");
		}
	}while(choice != 4);
}