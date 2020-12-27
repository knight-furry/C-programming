#include<stdio.h>
#include<stdlib.h>

struct student
{
	char name[20];
	int age;
	int rollno;
	float marks;
	struct student* next;
};

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
		scanf("%s", newnode->name);
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
		printf("1. Create Student Linked List\n2. Display Student Linked List\n3. Exit\nEnter your choice: ");
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
		}
	}while(choice != 3);
}